;(function_call
;  "(" @delimiter
;  ")" @delimiter @sentinel) @container

(bracketed_function_arguments
  "(" @delimiter
  ")" @delimiter @sentinel) @containe

(bracketed_ambiguous_expression
  "(" @delimiter
  ")" @delimiter @sentinel) @container

(bracketed_algebraic_expression
  "(" @delimiter
  ")" @delimiter @sentinel) @container

(bracketed_logical_expression
  "(" @delimiter
  ")" @delimiter @sentinel) @container

(bracketed_string_expression
  "(" @delimiter
  ")" @delimiter @sentinel) @container

(lambda
  "(" @delimiter
  ")" @delimiter @sentinel) @container

(set
  "{" @delimiter
  "}" @delimiter @sentinel) @container

(array
  "[" @delimiter
  "]" @delimiter @sentinel) @container

(index
  "[" @delimiter
  "]" @delimiter @sentinel) @container
