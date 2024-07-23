const PREC = {
  ASSIGN: -10,
  ASSIGN_EVAL: -10,
  RIGHT_ASSIGN: -10,
  SUBTRACTION: 15,
  ADDITION: 100,
  UNARY_MINUS: 25,
  MULTIPLICATION: 30,
  DIVISION: 35,
  POWER: 40,
  FACTORIAL: 45,
};

module.exports = grammar({
  name: "maxima",
  extras: ($) => [$.comment, $._whitespace],
  rules: {
    source_file: ($) => repeat($.statement),

    statement: ($) => seq($.expression, choice("$", ";")),

    // -------------------------------------------------------------------------

    expression: ($) =>
      choice(
        $._bracket_expression,
        $.assign,
        $.assign_eval,
        $._atom,
        $._binary_function,
        $._nary_function,
        $._unary_function,
        $.function_call,
        $.list,
        $.block,
        // $.if,
        // $.for,
        // $.while,
      ),

    // -------------------------------------------------------------------------

    assign: ($) => prec(PREC.ASSIGN, seq($.identifier, ":", $.expression)),

    assign_eval: ($) =>
      prec(PREC.ASSIGN_EVAL, seq($.identifier, "::", $.expression)),

    // TODO constants such as %pi or %e
    _atom: ($) => choice($.identifier, $.number),

    _bracket_expression: ($) => seq("(", $.expression, ")"),

    function_call: ($) =>
      seq(
        field("function", $.identifier),
        "(",
        optional($._function_arguments),
        ")",
      ),

    _function_arguments: ($) =>
      seq(
        repeat(seq(field("argument", $.expression), ",")),
        field("argument", $.expression),
      ),

    list: ($) => seq("[", optional($._function_arguments), "]"),

    block: ($) => seq("block", "(", optional($._function_arguments), ")"),

    // -------------------------------------------------------------------------

    _unary_function: ($) => choice($.unary_minus),

    unary_minus: ($) => prec(PREC.UNARY_MINUS, seq("-", $.expression)),

    // -------------------------------------------------------------------------

    _binary_function: ($) => choice($.subtraction, $.division),

    subtraction: ($) =>
      prec.left(PREC.SUBTRACTION, seq($.expression, "-", $.expression)),

    division: ($) =>
      prec.left(PREC.DIVISION, seq($.expression, "/", $.expression)),

    // -------------------------------------------------------------------------

    _nary_function: ($) => choice($.multiplication, $.addition),

    addition: ($) =>
      prec(
        PREC.ADDITION,
        seq(
          repeat1(seq(field("summand", $.expression), "+")),
          field("summand", $.expression),
        ),
      ),

    multiplication: ($) =>
      prec(
        PREC.MULTIPLICATION,
        seq(
          repeat1(seq(field("multiplicand", $.expression), "*")),
          field("multiplicand", $.expression),
        ),
      ),

    //-------------------------------------------------------------------------

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    number: ($) => /\d+(\.\d+)?/,

    //-------------------------------------------------------------------------
    // TODO Nested comments are allowed (but not supported by this parser)
    comment: ($) => seq("/*", optional($._comment_text), "*/"),

    _comment_text: ($) => repeat1(choice(/.|\n|\r/)),

    // TODO whitespace around a dot "." should not be removed.. see
    // https://maxima.sourceforge.io/docs/manual/maxima_singlepage.html#Dot
    // Also, if1=1 should not be parsed as if 1=1...
    _whitespace: ($) => /\s/,
  },
});
