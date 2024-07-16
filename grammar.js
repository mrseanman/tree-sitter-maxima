module.exports = grammar({
  name: 'maxima',

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.assignment,
      $.function_definition,
      $.control_structure,
      $.expression
    ),

    assignment: $ => seq(
      field('left', $.identifier),
      ':',
      field('right', $.expression)
    ),

    function_definition: $ => prec(1, seq(
      field('name', $.identifier),
      '(',
      optional($.parameter_list),
      ')',
      ':=',
      field('body', $.expression)
    )),

    parameter_list: $ => prec(1,seq(
      $.identifier,
      repeat(seq(',', $.identifier))
    )),

    control_structure: $ => choice(
      $.if_expression,
      $.for_expression
    ),

    if_expression: $ => seq(
      'if',
      field('condition', $.expression),
      'then',
      field('consequence', $.expression),
      optional(seq(
        'else',
        field('alternative', $.expression)
      ))
    ),

    for_expression: $ => seq(
      'for',
      field('variable', $.identifier),
      ':',
      field('start', $.expression),
      'step',
      field('step', $.expression),
      'until',
      field('end', $.expression),
      'do',
      field('body', $.expression)
    ),

    expression: $ => choice(
      $.number,
      $.identifier,
      $.binary_expression,
      $.function_call
    ),

    binary_expression: $ => choice(
      prec.left(seq($.expression, '+', $.expression)),
      prec.left(seq($.expression, '-', $.expression)),
      prec.left(seq($.expression, '*', $.expression)),
      prec.left(seq($.expression, '/', $.expression))
    ),

    function_call: $ => seq(
      field('name', $.identifier),
      '(',
      optional($.argument_list),
      ')'
    ),

    argument_list: $ => seq(
      $.expression,
      repeat(seq(',', $.expression))
    ),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    number: $ => /\d+(\.\d+)?/
  }
});

