const OPPREC = {
  ASSIGN: 10,
  ASSIGN_EVAL: 20,
  ASSIGN_FUNCTION: 30,
  IF: 40,
  EQUALITY: 50,
  INEQUALITY: 60,
  SUBTRACTION: 70,
  ADDITION: 80,
  UNARY_MINUS: 90,
  MULTIPLICATION: 100,
  DIVISION: 110,
  EXPONENT: 120,
  FACTORIAL: 130,
  INDEX: 140,
};

// Maybe get rid of this stuff
const TYPEPREC = {
  AMBIGUOUS: -1000,
  COMPOUND: -1000,
  LOGICAL: -1000,
  ALGEBRAIC: -1000,
  ASSIGNMENT: -1000,
};

module.exports = grammar({
  name: "maxima",

  extras: ($) => [$.comment, $._whitespace],

  rules: {
    source_file: ($) => repeat($.statement),
    statement: ($) => seq($._expression, choice("$", ";")),

    // *************************************************************************
    // *************************************************************************
    // ******* EXPRESSIONS *****************************************************
    // *************************************************************************
    // *************************************************************************

    _expression: ($) =>
      choice(
        // Ambiguous type
        $.expression,
        // Known, algebraic type
        $.algebraic_expression,
        // Known, logical type
        $.logical_expression,
        $.string_literal,
      ),

    // *************************************************************************
    // ******* AMBIGUOUS TYPE **************************************************
    // *************************************************************************

    expression: ($) =>
      prec(
        TYPEPREC.AMBIGUOUS,
        choice(
          $._ambiguous_atom,
          $._bracket_ambiguous_expression,
          $._assignment_expression,
          $.array,
          $.indexed_array,
          $.block,
          $.function_call,
          $.if,
        ),
      ),

    _bracket_ambiguous_expression: ($) => seq("(", $.expression, ")"),

    block: ($) => seq("block", "(", optional($._function_arguments), ")"),

    // -------------------------------------------

    if: ($) =>
      prec.right(
        OPPREC.IF,
        seq(
          "if",
          $._condition_then_consequence,
          repeat(field("alternative", $.elseif_alternative)),
          optional(field("alternative", $.else_alternative)),
        ),
      ),

    elseif_alternative: ($) => seq("elseif", $._condition_then_consequence),

    else_alternative: ($) => seq("else", field("consequence", $._expression)),

    _condition_then_consequence: ($) =>
      seq(
        field("condition", choice($.expression, $.logical_expression)),
        "then",
        field("consequence", $._expression),
      ),

    // -------------------------------------------

    function_call: ($) =>
      seq(
        field("function", $.identifier),
        "(",
        optional($._function_arguments),
        ")",
      ),

    _ambiguous_atom: ($) => choice($.identifier),

    // *************************************************************************
    // ******* ASSIGNMENT TYPE *************************************************
    // *************************************************************************

    _assignment_expression: ($) =>
      prec(
        TYPEPREC.ASSIGNMENT,
        choice(
          $._bracket_assignment_expression,
          $.assign,
          $.assign_eval,
          $.assign_function,
        ),
      ),

    _bracket_assignment_expression: ($) =>
      seq("(", $._assignment_expression, ")"),

    assign: ($) =>
      prec(
        OPPREC.ASSIGN,
        seq(
          field("assigned_identifier", $.identifier),
          ":",
          field("assigned_value", $._expression),
        ),
      ),

    assign_eval: ($) =>
      prec(OPPREC.ASSIGN_EVAL, seq($.identifier, "::", $._expression)),

    assign_function: ($) =>
      prec(
        OPPREC.ASSIGN_FUNCTION,
        seq(
          field("assigned_identifier", $.identifier),
          "(",
          optional($._function_arguments),
          ")",
          ":=",
          field("assigned_value", $._expression),
        ),
      ),

    // *************************************************************************
    // ******* COMPOUND TYPES **************************************************
    // *************************************************************************

    array: ($) => seq("[", optional($._function_arguments), "]"),
    indexed_array: ($) =>
      prec(
        OPPREC.INDEX,
        seq(
          field("array", $.expression),
          "[",
          field("index", choice($.expression, $.algebraic_expression)),
          "]",
        ),
      ),

    // *************************************************************************
    // ******* ALGEBRAIC TYPE **************************************************
    // *************************************************************************

    algebraic_expression: ($) =>
      prec(
        TYPEPREC.ALGEBRAIC,
        choice(
          $._algebraic_atom,
          $._bracket_algebraic_expression,
          $._binary_algebraic_function,
          $._unary_algebraic_function,
        ),
      ),

    _bracket_algebraic_expression: ($) => seq("(", $.algebraic_expression, ")"),

    _algebraic_atom: ($) => choice($.number, $._const),

    _const: ($) => choice($.pi_const_atom, $.e_const_atom),

    // -------------------------------------------

    _unary_algebraic_function: ($) => choice($.unary_minus),

    unary_minus: ($) =>
      prec(
        OPPREC.UNARY_MINUS,
        seq("-", choice($.expression, $.algebraic_expression)),
      ),

    // -------------------------------------------

    _binary_algebraic_function: ($) =>
      choice(
        $.addition,
        $.subtraction,
        $.multiplication,
        $.division,
        $.exponent,
      ),

    addition: ($) =>
      prec.left(
        OPPREC.ADDITION,
        seq(
          field("summand", choice($.expression, $.algebraic_expression)),
          "+",
          field("summand", choice($.expression, $.algebraic_expression)),
        ),
      ),

    subtraction: ($) =>
      prec.left(
        OPPREC.SUBTRACTION,
        seq(
          field("summand", choice($.expression, $.algebraic_expression)),
          "-",
          field("subtractand", choice($.expression, $.algebraic_expression)),
        ),
      ),

    multiplication: ($) =>
      prec.left(
        OPPREC.MULTIPLICATION,
        seq(
          field("multiplicand", choice($.expression, $.algebraic_expression)),
          "*",
          field("multiplicand", choice($.expression, $.algebraic_expression)),
        ),
      ),

    division: ($) =>
      prec.left(
        OPPREC.DIVISION,
        seq(
          field("numerator", choice($.expression, $.algebraic_expression)),
          "/",
          field("divisor", choice($.expression, $.algebraic_expression)),
        ),
      ),

    exponent: ($) =>
      prec.right(
        OPPREC.EXPONENT,
        seq(
          field("base", choice($.expression, $.algebraic_expression)),
          "^",
          field("exponent", choice($.expression, $.algebraic_expression)),
        ),
      ),

    // -------------------------------------------

    pi_const_atom: ($) => token("%pi"),
    e_const_atom: ($) => token("%e"),

    // *************************************************************************
    // ******* LOGICAL TYPE ****************************************************
    // *************************************************************************

    logical_expression: ($) =>
      prec(
        TYPEPREC.LOGICAL,
        choice(
          $._bracket_logical_expression,
          $._logical_atom,
          $.equation,
          $.less_than,
          $.less_than_eq,
          $.greater_than,
          $.greater_than_eq,
        ),
      ),

    _bracket_logical_expression: ($) => seq("(", $.logical_expression, ")"),

    _logical_atom: ($) => choice($._tf_atom),

    _tf_atom: ($) => choice($.true_atom, $.false_atom),

    // Equations are valid with really anything on LHS or RHS
    // (sort of ... a=b=c is not parsed, but (a=b)=c and a=(b=c) are)
    equation: ($) =>
      prec.left(
        OPPREC.EQUALITY,
        seq(field("LHS", $._expression), "=", field("RHS", $._expression)),
      ),

    // For an inequality, only ambiguous or algebraic expressions can be LHS or RHS
    less_than: ($) =>
      prec.left(
        OPPREC.INEQUALITY,
        seq(
          field("LHS", choice($.expression, $.algebraic_expression)),
          "<",
          field("RHS", choice($.expression, $.algebraic_expression)),
        ),
      ),
    less_than_eq: ($) =>
      prec.left(
        OPPREC.INEQUALITY,
        seq(
          field("LHS", choice($.expression, $.algebraic_expression)),
          "<=",
          field("RHS", choice($.expression, $.algebraic_expression)),
        ),
      ),
    greater_than: ($) =>
      prec.right(
        OPPREC.INEQUALITY,
        seq(
          field("LHS", choice($.expression, $.algebraic_expression)),
          ">",
          field("RHS", choice($.expression, $.algebraic_expression)),
        ),
      ),
    greater_than_eq: ($) =>
      prec.left(
        OPPREC.INEQUALITY,
        seq(
          field("LHS", choice($.expression, $.algebraic_expression)),
          ">=",
          field("RHS", choice($.expression, $.algebraic_expression)),
        ),
      ),

    // -------------------------------------------

    true_atom: ($) => token("true"),
    false_atom: ($) => token("false"),

    // *************************************************************************
    // ******* STRINGS *********************************************************
    // *************************************************************************

    string_literal: ($) =>
      choice($._double_quoted_string, $._single_quoted_string),

    _double_quoted_string: ($) =>
      seq('"', repeat(choice($.escaped_char, $.double_quoted_content)), '"'),

    _single_quoted_string: ($) =>
      seq("'", repeat(choice($.escaped_char, $.single_quoted_content)), "'"),

    escaped_char: ($) => token(seq("\\", /./)),

    double_quoted_content: ($) => token(prec(-1, /[^"\\]+/)),

    single_quoted_content: ($) => token(prec(-1, /[^'\\]+/)),

    // *************************************************************************
    // ******* HELPER **********************************************************
    // *************************************************************************

    _function_arguments: ($) =>
      seq(
        repeat(seq(field("argument", $._expression), ",")),
        field("argument", $._expression),
      ),

    // *************************************************************************
    // ******* PRIMITIVES ******************************************************
    // *************************************************************************

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    number: ($) => /\d+(\.\d+)?/,

    // *************************************************************************
    // ******* EXTRAS **********************************************************
    // *************************************************************************

    // TODO Nested comments are allowed (but not supported by this parser)
    comment: ($) => seq("/*", optional($._comment_text), "*/"),

    _comment_text: ($) => repeat1(choice(/.|\n|\r/)),

    // TODO whitespace around a dot "." should not be removed.. see
    // https://maxima.sourceforge.io/docs/manual/maxima_singlepage.html#Dot
    // Also, if1=1 should not be parsed as if 1=1...
    _whitespace: ($) => /\s/,
  },
});
