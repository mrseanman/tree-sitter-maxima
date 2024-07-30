(identifier) @variable

[
  (integer)
  (decimal_float)
  (sci_float)
] @number

(assign
  assigned_identifier: (identifier) @variable
  ":" @operator)
(assign_array_index
  ":" @operator)
(assign_function
  assigned_identifier: (identifier) @function
  ":=" @operator)

(function_call
  function: (identifier) @function.call)

(comment) @comment
(double_quoted_string_literal) @string
(single_quoted_string_literal) @string
(escaped_char) @string.escape

[
  (true_atom)
  (false_atom)
] @boolean

[
  "-"
  "*"
  "/"
  "^"
  "+"
  "<"
  "<="
  "="
  ">"
  ">="
  "'"
  "and"
  "not"
  "or"
] @operator

[
  "break"
  "block"
  "lambda"
  "print"
  "return"
  "is"
] @keyword.function

[
  "if"
  "then"
  "elseif"
  "else"
] @keyword.conditional

[
  "do"
  "for"
  "thru"
  "step"
  "in"
  "while"
  "unless"
] @keyword.repeat

[
  "and"
  "or"
  "not"
] @keyword.operator

[
 ";"
 "$"
] @punctuation.delimiter

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket

; source https://www.vim.org/scripts/script.php?script_id=398
((function_call
   function: (identifier) @function.builtin)
 (#match?
   @function.builtin
   "^(cesh|acos|acosh|acot|acoth|acsc|acsch|activate|addcol|addrow||adjoint|airy|alarmclock|algsys|alias|alloc|allroots|antid|antidiff|append|appendfile|apply|apply1|apply2|apply_nouns|applyb1|apropos|args|array|arrayapply|arrayinfo|arraymake|asin|asinh|askinteger|asksign|assec|asume|asymp|asympa|at|atan|atan2|atanh|atom|atrig1|atvalue|augcoefmatrix|backup|batcon|bashindices|batch|batchload|bern|bernpoly|bessel|beta|bezout|bffac|bfloat|bfloatp|bfpsi|bfzeta|bgzeta|bhzeta|bindtest|binomial|block|bothcoef|box|break|bug|buildq|burn|bzeta|cabs|canform|canten|carg|cartan|catch|cbfac|cf|cfdisrep|cfexpand|cgamma|cgamma2|changevar|charpoly|check_overlaps|chr1|chr2|christof|clearscreen|closefile|closeps|coeff|coefmatrix|col|collapse|columnvector|combine|comp2pui|compfile|compile|compile_file|compile_lisp_file|concat|conjugate|cons|constantp|cont2part|content|continue|contract|copylist|copymatrix|cos|coshcot|coth|covdiff|create_list|csc|csch|curvature|dblint|ddt|deactivate|debug|debugprintmode|declare|declare_translated|declare_weight|defcon|define|define_variable|defintd|efmatch|defrule|deftaylor|delete|delfile|delta|demo|denom|depends|derivdegree|derivlist|describe|desolve|determinant|diagmatrix|dimension|direct|diskfree|disolate|disp|dispcon|dispform|dispfun|display|disprule|dispterms|distrib|divide|divsum|dotsimp|dpart|dscalar|dummy|echelon|eigenvalues|eigenvectors|einstein|ele2comp|ele2polynome|ele2pui|elem|eliminate|ematrix|endcons|entermatrix|entier|equal|erf|errcatch|error|errormsg|euler|ev|eval|evenp|example|exp|expand|expandwrt|expandwrt_factored|explose|express|expt|extrac_linear_equations|ezgcd|factcomb|factor|factorial|factorout|factorsum|facts|fassave|fast_central_elements|fast_linsolve|fasttimes|featurep|fft|fib|fibtophi|file_type|filedefaults|filename_merge|fillarray|first|fix|float|floatdefunk|floatnump|flush|flushd|flushnd|forget|fortmx|fortran|freeof|fullmap|fullmapl|fullratsimp|fullratsubst|funcsolve|fundef|funmake|gamma|gauss|gcd|gcfactor|gendiff|genfact|genmatrix|get|getchar|gfactor|gfactorsum|go|gradef|gramschmidt|grind|grobner_basis|hach|hipow|horner|ic1|ident|ieqn|ift|ilt|imagpart|indices|infix|innerproduct|inpart|inrt|integerp|integrate|interpolate|intopois|intosum|intsce|invert|is|isolate|isqrt|jacobi|kdelta|kill|killcontext|kostka|labels|laplace|last|lc|lcm|ldefint|ldisp|ldisplay|length|let|letrules|letsimp|lgtreillis|lhs|limit|linsolve|lispdebugmode|listarray|listofvars|load|loadfile|local|log|logcontract|lopow|lorentz|lpart|lratsubst|lriccicom|ltreillis|m1pbranch|make_array|makebox|makefact|makegamma|makelist|map|mapatom|maplist|matchdeclare|matchfix|matrix|matrixmap|matrixp|mattrace|max|member|metric|min|minfactorial|minor|mod|mode_declare|mode_identity|mon2schur|mono|monomial_dimensions|motion|multi_elem|multi_orbit|multi_pui|multinomial|multsym|multthru|nc_degree|ncexpt|ncharpoly|new-disrep|newcontext|newdet|newton|niceindices|nonscalarp|nostring|nounity|nroots|nterms|ntermsg|ntermsrci|nthroot|num|numberp|numberval|numfactor|nusum|nzeta|oddp|ode|ode2|openplot_curves|optimize|orbit|ordergreat|ordergreatp|orderless|orderlessp|outofpois|pade|part|part2cont|partfrac|partition|partpol|pcoeff|permanent|permut|pickapart|playback|plog|plot2d|plot2d_ps|plot3d|poisdiff|poisexpt|poisint|poismap|poisplus|poissimp|poissubst|poistimes|poistrim|polarform|polartorect|polynome2ele|potential|powers|powerseries|prime|primep|print|printpois|printprops|prodrac|product|properties|propvars|pscom|psdraw_curve|psi|pui|pui_direct|pui2comp|pui2ele|pui2polynome|puireduc|put|qput|qq|quanc8|quit|qunit|quotient|radcan|raiseriemann|random|rank|rat|ratcoef|ratdenom|ratdiff|ratdisrep|ratexpand|ratnumer|ratnump|ratp|ratsimp|ratsubs|ratvars|ratweight|read|readonly|realpart|realrules|rearray|rectform|recttopolar|rem|remainder|remarray|rembox|remcon|remfunction|remlet|remove|remrule|remtrace|remvalue|rename|reset|residue|resolvante|resolvante_alternee1|resolvante_bipartite|resolvante_diedrale|resolvante_klein|resolvante_klein3|resolvante_produit_sym|resolvante_unitaire|resolvante_vierer|rest|restore|resultant|return|reveal|reverse|reverte|rhs|riccicom|riemman|rinvariant|risch|rncombine|romberg|room|rootscontract|row|save|scalarp|scalefactors|scanmap|schur2comp|sconcat|scsimp|scurvature|sec|sech|set_plot_option|set_up_dot_simplifications|setelmx|setup|setup_autoload|show|showratvars|sign|signum|similaritytransform|simp|sin|sinh|solve|somrac|sort|sprint|sqfr|sqrt|srrat|sstatus|status|string|stringout|sublis|sublist|submatrix|subst|substinpart|substpart|subvarp|sum|sumcontract|supcontext|symbolp|system|tan|tanh|taylor|taylor_simplifier|taylorinfo|taylorp|taytorat|tcl_output|tcontract|tellrat|tellsimp|tellsimpafter|throw|time|timer|timer_info|tldefint|tlimit|to_lisp|tobreak|todd_coxeter|toplevel|totaldisrep|totient|tpartpol|tr_warnings_get|trace|trace_options|transform|translate|translate_file|transpose|treillis|treinat|triangularize|tringexpand|trigrat|trigreduce|trigsimp|trunc|tsetup|ttransform|undiff|uniteigenvectors|unitvector|unknown|unorder|unsum|untellrat|untrace|vectorpotential|vectorsimp|verbify|weyl|writefile|xgraph_curves|xthru|zeroequiv|zeromatrix|zeta|zrpoly|zsolve)$"))
