module.exports = grammar({
  name: "maxima",
  extras: ($) => [$.comment, $._whitespace],
  rules: {
    source_file: ($) => repeat($.statement),

    statement: ($) => seq($.expression, choice("$", ";")),

    expression: ($) =>
      choice(
        $._bracket_expression,
        $.declaration,
        $._atom,
        // $.unary_expression,
        // $.binary_expression,
        // $.nary_expression,
        $.function_call,
        $.list,
        $.block,
        // $.if,
        // $.for,
        // $.while,
      ),

    declaration: ($) => seq($.identifier, ":", $.expression),

    // TODO constants such as %pi or %e
    _atom: ($) => choice($.identifier, $.number),

    _bracket_expression: ($) => seq("(", $.expression, ")"),

    function_call: ($) =>
      seq($.identifier, "(", optional($._function_arguments), ")"),

    _function_arguments: ($) =>
      seq(repeat(seq($.expression, ",")), seq($.expression)),

    list: ($) => seq("[", optional($._function_arguments), "]"),

    block: ($) => seq("block", "(", optional($._function_arguments), ")"),

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
