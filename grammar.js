const OPPREC = {
  ITERATE: -10,
  ASSIGN: 10,
  ASSIGN_EVAL: 20,
  ASSIGN_FUNCTION: 30,
  IS: 35,
  IF: 40,
  EQUALITY: 50,
  INEQUALITY: 60,
  OR: 61,
  AND: 62,
  NOT: 63,
  SUBTRACTION: 70,
  ADDITION: 80,
  UNARY_MINUS: 90,
  MULTIPLICATION: 100,
  DOTMULTIPLICATION: 105,
  DIVISION: 110,
  EXPONENT: 120,
  FACTORIAL: 130,
  INDEX: 140,
  FUNCTION_CALL: 145,
  NOUNIFY: 150,
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
        // Also where type separation is not important for parsing.
        // E.g. algebraic expressions can be iterated on just as well as arrays.
        $.expression,
        // Known, algebraic type
        $.algebraic_expression,
        // Known, logical type
        $.logical_expression,
        // Known, string literal type
        $.string_expression,
      ),

    // *************************************************************************
    // ******* AMBIGUOUS TYPE **************************************************
    // *************************************************************************

    expression: ($) =>
      choice(
        $._ambiguous_atom,
        $.bracketed_ambiguous_expression,
        $._ambiguous_special_function,
        $._unary_ambiguous_function,
        $._program_flow,
        $._assignment_expression,
        $._arrays_and_sets,
      ),

    // -------------------------------------------

    _ambiguous_atom: ($) => choice($.identifier),

    bracketed_ambiguous_expression: ($) => seq("(", $.expression, ")"),

    // ******* SPECIAL FUNCTIONS ***********************************************

    _ambiguous_special_function: ($) =>
      choice($.break, $.lambda, $.print, $.return),

    break: ($) => seq("break", $.bracketed_function_arguments),

    lambda: ($) =>
      seq(
        "lambda",
        "(",
        field("lambda_variables", $.array),
        ",",
        $._expression,
        repeat(seq(",", $._expression)),
        ")",
      ),

    print: ($) => seq("print", $.bracketed_function_arguments),

    return: ($) => seq("return", $.bracketed_function_arguments),

    // ******* UNARY FUNCTIONS *************************************************

    _unary_ambiguous_function: ($) => choice($.nounified_expression),

    nounified_expression: ($) => prec(OPPREC.NOUNIFY, seq("'", $.expression)),

    // ******* PROGRAM FLOW ****************************************************

    _program_flow: ($) =>
      choice(
        // $.expression_function_call,
        $.function_call,
        $.block,
        $.if,
        $._iterate,
      ),

    // Sometimes the function is an expression, not just an identifier
    // This is especially important for nounified functions, e.g. 'cos(%pi)
    // I see no need to parse algebraic expressions as the function.
    // e.g. (f+g)(10) will not be parsed. It is not parsed as a sum of functions
    // in maxima
    function_call: ($) =>
      prec(
        OPPREC.FUNCTION_CALL,
        seq(
          field(
            "function",
            choice($.identifier, $.expression, $.algebraic_expression),
          ),
          $.bracketed_function_arguments,
        ),
      ),

    block: ($) => seq("block", $.bracketed_function_arguments),

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

    _iterate: ($) =>
      prec(
        OPPREC.ITERATE,
        choice(
          $.for_var_in_array,
          $.for_step_thru,
          $.for_step_while,
          $.for_step_unless,
          $.while,
          $.do,
        ),
      ),

    for_var_in_array: ($) =>
      seq(
        "for",
        field("iterator", $.identifier),
        "in",
        field("iterate_thru", $._expression),
        optional(
          field(
            "terminating_condition",
            choice($.expression, $.logical_expression),
          ),
        ),
        $.do,
      ),

    for_step_thru: ($) =>
      seq(
        "for",
        field("initialize_iterator", $.initialize_for_iterator),
        optional(seq("step", $._expression)),
        "thru",
        field("terminating_value", $._expression),
        $.do,
      ),

    for_step_while: ($) =>
      seq(
        "for",
        field("initialize_iterator", $.initialize_for_iterator),
        optional(seq("step", $._expression)),
        "while",
        field(
          "continuing_condition",
          choice($.expression, $.logical_expression),
        ),
        $.do,
      ),

    for_step_unless: ($) =>
      seq(
        "for",
        field("initialize_iterator", $.initialize_for_iterator),
        optional(seq("step", $._expression)),
        "unless",
        field(
          "terminating_condition",
          choice($.expression, $.logical_expression),
        ),
        $.do,
      ),

    initialize_for_iterator: ($) =>
      seq(
        field("iterator", $.identifier),
        ":",
        field("initial_value", $._expression),
      ),

    while: ($) =>
      seq(
        "while",
        field(
          "continuing_condition",
          choice($.expression, $.logical_expression),
        ),
        $.do,
      ),

    do: ($) => seq("do", field("action", $._expression)),

    // ******* ASSIGNMENT ******************************************************

    _assignment_expression: ($) =>
      choice($.assign, $.assign_eval, $.assign_function, $.assign_array_index),

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
          $.bracketed_function_arguments,
          ":=",
          field("assigned_value", $._expression),
        ),
      ),

    assign_array_index: ($) =>
      prec(
        OPPREC.ASSIGN,
        seq(
          field("assigned_indexed_array", $.indexed_iterator),
          ":",
          field("assigned_value", $._expression),
        ),
      ),

    // ******* ARRAYS AND SETS *************************************************

    _arrays_and_sets: ($) => choice($.array, $.set, $.indexed_iterator),

    set: ($) => seq("{", optional($._function_arguments), "}"),

    array: ($) => seq("[", optional($._function_arguments), "]"),

    indexed_iterator: ($) =>
      prec(OPPREC.INDEX, seq(field("iterator", $.expression), $.index)),

    index: ($) =>
      seq(
        "[",
        field("index", choice($.expression, $.algebraic_expression)),
        "]",
      ),

    // *************************************************************************
    // ******* ALGEBRAIC TYPE **************************************************
    // *************************************************************************

    algebraic_expression: ($) =>
      choice(
        $._algebraic_atom,
        $.bracketed_algebraic_expression,
        $._binary_algebraic_function,
        $._unary_algebraic_function,
      ),

    bracketed_algebraic_expression: ($) =>
      seq("(", $.algebraic_expression, ")"),

    _algebraic_atom: ($) => choice($._number_literal, $._const),

    _const: ($) => choice($.pi_const_atom, $.e_const_atom),

    _number_literal: ($) => choice($.integer, $.decimal_float, $.sci_float),

    // -------------------------------------------

    _unary_algebraic_function: ($) =>
      choice($.unary_minus, $.nounified_algebraic_expression),

    unary_minus: ($) =>
      prec(
        OPPREC.UNARY_MINUS,
        seq("-", choice($.expression, $.algebraic_expression)),
      ),

    nounified_algebraic_expression: ($) =>
      prec(OPPREC.NOUNIFY, seq("'", $.algebraic_expression)),

    // -------------------------------------------

    _binary_algebraic_function: ($) =>
      choice(
        $.addition,
        $.subtraction,
        $.multiplication,
        $.dot_multiplication,
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

    dot_multiplication: ($) =>
      prec.left(
        OPPREC.DOTMULTIPLICATION,
        seq(
          field("multiplicand", choice($.expression, $.algebraic_expression)),
          ".",
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
      choice(
        $.bracketed_logical_expression,
        $._logical_atom,
        $._unary_logical_function,
        $._binary_logical_function,
        $._special_logical_function,
        $.equation,
        $.less_than,
        $.less_than_eq,
        $.greater_than,
        $.greater_than_eq,
      ),

    bracketed_logical_expression: ($) => seq("(", $.logical_expression, ")"),

    _logical_atom: ($) => choice($._tf_atom),

    _tf_atom: ($) => choice($.true_atom, $.false_atom),

    // -------------------------------------------

    _special_logical_function: ($) => choice($.is),

    is: ($) =>
      prec.left(
        OPPREC.IS,
        seq("is", choice($.expression, $.logical_expression)),
      ),

    // -------------------------------------------

    _unary_logical_function: ($) =>
      choice($.nounified_logical_expression, $.not),

    nounified_logical_expression: ($) =>
      prec(OPPREC.NOUNIFY, seq("'", $.logical_expression)),

    not: ($) =>
      prec(
        OPPREC.NOT,
        seq(
          "not",
          field(
            "negated_expression",
            choice($.expression, $.logical_expression),
          ),
        ),
      ),

    // -------------------------------------------

    _binary_logical_function: ($) => choice($.and, $.or),

    and: ($) =>
      prec.left(
        OPPREC.AND,
        seq(
          field("LHS", choice($.expression, $.logical_expression)),
          "and",
          field("RHS", choice($.expression, $.logical_expression)),
        ),
      ),

    or: ($) =>
      prec.left(
        OPPREC.OR,
        seq(
          field("LHS", choice($.expression, $.logical_expression)),
          "or",
          field("RHS", choice($.expression, $.logical_expression)),
        ),
      ),

    // -------------------------------------------

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

    string_expression: ($) =>
      choice(
        $.bracketed_string_expression,
        $.nounified_string_expression,
        $.double_quoted_string_literal,
        $.single_quoted_string_literal,
      ),

    bracketed_string_expression: ($) => seq("(", $.string_expression, ")"),

    nounified_string_expression: ($) =>
      prec(OPPREC.NOUNIFY, seq("'", $.string_expression)),

    double_quoted_string_literal: ($) =>
      seq('"', repeat(choice($.escaped_char, $.double_quoted_content)), '"'),

    single_quoted_string_literal: ($) =>
      seq("'", repeat(choice($.escaped_char, $.single_quoted_content)), "'"),

    escaped_char: ($) => token(seq("\\", /./)),

    double_quoted_content: ($) => token(prec(-1, /[^"\\]+/)),

    single_quoted_content: ($) => token(prec(-1, /[^'\\]+/)),

    // *************************************************************************
    // ******* HELPER **********************************************************
    // *************************************************************************

    bracketed_function_arguments: ($) =>
      seq("(", optional($._function_arguments), ")"),

    _function_arguments: ($) =>
      seq(
        repeat(seq(field("argument", $._expression), ",")),
        field("argument", $._expression),
      ),

    // *************************************************************************
    // ******* PRIMITIVES ******************************************************
    // *************************************************************************

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    integer: ($) => /\d+/,
    decimal_float: ($) => /\d+(\.\d+)?/,
    sci_float: ($) => /\d+(\.\d+)?[eE]-?\d+/,

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
