#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_DOLLAR = 1,
  anon_sym_SEMI = 2,
  anon_sym_COLON = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_block = 9,
  sym_identifier = 10,
  sym_number = 11,
  anon_sym_SLASH_STAR = 12,
  anon_sym_STAR_SLASH = 13,
  aux_sym__comment_text_token1 = 14,
  sym__whitespace = 15,
  sym_source_file = 16,
  sym_statement = 17,
  sym_expression = 18,
  sym_declaration = 19,
  sym__atom = 20,
  sym__bracket_expression = 21,
  sym_function_call = 22,
  sym__function_arguments = 23,
  sym_list = 24,
  sym_block = 25,
  sym_comment = 26,
  aux_sym__comment_text = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym__function_arguments_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_block] = "block",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [aux_sym__comment_text_token1] = "_comment_text_token1",
  [sym__whitespace] = "_whitespace",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_declaration] = "declaration",
  [sym__atom] = "_atom",
  [sym__bracket_expression] = "_bracket_expression",
  [sym_function_call] = "function_call",
  [sym__function_arguments] = "_function_arguments",
  [sym_list] = "list",
  [sym_block] = "block",
  [sym_comment] = "comment",
  [aux_sym__comment_text] = "_comment_text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__function_arguments_repeat1] = "_function_arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_block] = anon_sym_block,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [aux_sym__comment_text_token1] = aux_sym__comment_text_token1,
  [sym__whitespace] = sym__whitespace,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_declaration] = sym_declaration,
  [sym__atom] = sym__atom,
  [sym__bracket_expression] = sym__bracket_expression,
  [sym_function_call] = sym_function_call,
  [sym__function_arguments] = sym__function_arguments,
  [sym_list] = sym_list,
  [sym_block] = sym_block,
  [sym_comment] = sym_comment,
  [aux_sym__comment_text] = aux_sym__comment_text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__function_arguments_repeat1] = aux_sym__function_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__comment_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym__bracket_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__function_arguments] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__comment_text] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__function_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      ADVANCE_MAP(
        '$', 6,
        '(', 9,
        ')', 10,
        '*', 26,
        ',', 11,
        '/', 25,
        ':', 8,
        ';', 7,
        '[', 12,
        ']', 13,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(22);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      ADVANCE_MAP(
        '$', 6,
        '(', 9,
        ')', 10,
        ',', 11,
        '/', 2,
        ':', 8,
        ';', 7,
        '[', 12,
        ']', 13,
        'b', 17,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_block);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__comment_text_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__comment_text_token1);
      if (lookahead == '*') ADVANCE(22);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__comment_text_token1);
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {(TSStateId)(-1)},
  [40] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [aux_sym__comment_text_token1] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym_statement] = STATE(13),
    [sym_expression] = STATE(30),
    [sym_declaration] = STATE(23),
    [sym__atom] = STATE(23),
    [sym__bracket_expression] = STATE(23),
    [sym_function_call] = STATE(23),
    [sym_list] = STATE(23),
    [sym_block] = STATE(23),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(19),
  },
  [2] = {
    [sym_expression] = STATE(29),
    [sym_declaration] = STATE(23),
    [sym__atom] = STATE(23),
    [sym__bracket_expression] = STATE(23),
    [sym_function_call] = STATE(23),
    [sym__function_arguments] = STATE(38),
    [sym_list] = STATE(23),
    [sym_block] = STATE(23),
    [sym_comment] = STATE(2),
    [aux_sym__function_arguments_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(19),
  },
  [3] = {
    [sym_statement] = STATE(13),
    [sym_expression] = STATE(30),
    [sym_declaration] = STATE(23),
    [sym__atom] = STATE(23),
    [sym__bracket_expression] = STATE(23),
    [sym_function_call] = STATE(23),
    [sym_list] = STATE(23),
    [sym_block] = STATE(23),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(28),
    [anon_sym_block] = ACTIONS(31),
    [sym_identifier] = ACTIONS(34),
    [sym_number] = ACTIONS(37),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(19),
  },
  [4] = {
    [sym_expression] = STATE(29),
    [sym_declaration] = STATE(23),
    [sym__atom] = STATE(23),
    [sym__bracket_expression] = STATE(23),
    [sym_function_call] = STATE(23),
    [sym__function_arguments] = STATE(36),
    [sym_list] = STATE(23),
    [sym_block] = STATE(23),
    [sym_comment] = STATE(4),
    [aux_sym__function_arguments_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(40),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(19),
  },
  [5] = {
    [sym_statement] = STATE(13),
    [sym_expression] = STATE(30),
    [sym_declaration] = STATE(23),
    [sym__atom] = STATE(23),
    [sym__bracket_expression] = STATE(23),
    [sym_function_call] = STATE(23),
    [sym_list] = STATE(23),
    [sym_block] = STATE(23),
    [sym_comment] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(19),
  },
  [6] = {
    [sym_expression] = STATE(29),
    [sym_declaration] = STATE(23),
    [sym__atom] = STATE(23),
    [sym__bracket_expression] = STATE(23),
    [sym_function_call] = STATE(23),
    [sym__function_arguments] = STATE(35),
    [sym_list] = STATE(23),
    [sym_block] = STATE(23),
    [sym_comment] = STATE(6),
    [aux_sym__function_arguments_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(19),
  },
  [7] = {
    [sym_expression] = STATE(27),
    [sym_declaration] = STATE(23),
    [sym__atom] = STATE(23),
    [sym__bracket_expression] = STATE(23),
    [sym_function_call] = STATE(23),
    [sym_list] = STATE(23),
    [sym_block] = STATE(23),
    [sym_comment] = STATE(7),
    [aux_sym__function_arguments_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(19),
  },
  [8] = {
    [sym_expression] = STATE(37),
    [sym_declaration] = STATE(23),
    [sym__atom] = STATE(23),
    [sym__bracket_expression] = STATE(23),
    [sym_function_call] = STATE(23),
    [sym_list] = STATE(23),
    [sym_block] = STATE(23),
    [sym_comment] = STATE(8),
    [aux_sym__function_arguments_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_block] = ACTIONS(52),
    [sym_identifier] = ACTIONS(55),
    [sym_number] = ACTIONS(58),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_block,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(19), 1,
      sym__whitespace,
    STATE(9), 1,
      sym_comment,
    STATE(32), 1,
      sym_expression,
    STATE(23), 6,
      sym_declaration,
      sym__atom,
      sym__bracket_expression,
      sym_function_call,
      sym_list,
      sym_block,
  [36] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_block,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(19), 1,
      sym__whitespace,
    STATE(10), 1,
      sym_comment,
    STATE(20), 1,
      sym_expression,
    STATE(23), 6,
      sym_declaration,
      sym__atom,
      sym__bracket_expression,
      sym_function_call,
      sym_list,
      sym_block,
  [72] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_comment,
    ACTIONS(61), 5,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [95] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    STATE(12), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_block,
      sym_identifier,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_number,
  [115] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    STATE(13), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_block,
      sym_identifier,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_number,
  [135] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    STATE(14), 1,
      sym_comment,
    ACTIONS(75), 5,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [152] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    STATE(15), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [169] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    STATE(16), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [186] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    STATE(17), 1,
      sym_comment,
    ACTIONS(81), 5,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [203] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    STATE(18), 1,
      sym_comment,
    ACTIONS(83), 5,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [220] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    STATE(19), 1,
      sym_comment,
    ACTIONS(85), 5,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [237] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    STATE(20), 1,
      sym_comment,
    ACTIONS(87), 5,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [254] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    STATE(21), 1,
      sym_comment,
    ACTIONS(89), 5,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [271] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    STATE(22), 1,
      sym_comment,
    ACTIONS(61), 5,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [288] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    STATE(23), 1,
      sym_comment,
    ACTIONS(91), 5,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [305] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    STATE(24), 1,
      sym_comment,
    ACTIONS(95), 2,
      anon_sym_block,
      sym_identifier,
    ACTIONS(93), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_number,
  [324] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(97), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(99), 1,
      aux_sym__comment_text_token1,
    STATE(25), 2,
      sym_comment,
      aux_sym__comment_text,
  [341] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(102), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(104), 1,
      aux_sym__comment_text_token1,
    STATE(25), 1,
      aux_sym__comment_text,
    STATE(26), 1,
      sym_comment,
  [360] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [377] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(104), 1,
      aux_sym__comment_text_token1,
    ACTIONS(110), 1,
      anon_sym_STAR_SLASH,
    STATE(26), 1,
      aux_sym__comment_text,
    STATE(28), 1,
      sym_comment,
  [396] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [413] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    STATE(30), 1,
      sym_comment,
    ACTIONS(114), 2,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [427] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(116), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(118), 1,
      aux_sym__comment_text_token1,
    STATE(31), 1,
      sym_comment,
  [443] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_comment,
  [456] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym_comment,
  [469] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_comment,
  [482] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_comment,
  [495] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_comment,
  [508] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      sym_comment,
  [521] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      sym_comment,
  [534] = 1,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
  [538] = 1,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 36,
  [SMALL_STATE(11)] = 72,
  [SMALL_STATE(12)] = 95,
  [SMALL_STATE(13)] = 115,
  [SMALL_STATE(14)] = 135,
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 169,
  [SMALL_STATE(17)] = 186,
  [SMALL_STATE(18)] = 203,
  [SMALL_STATE(19)] = 220,
  [SMALL_STATE(20)] = 237,
  [SMALL_STATE(21)] = 254,
  [SMALL_STATE(22)] = 271,
  [SMALL_STATE(23)] = 288,
  [SMALL_STATE(24)] = 305,
  [SMALL_STATE(25)] = 324,
  [SMALL_STATE(26)] = 341,
  [SMALL_STATE(27)] = 360,
  [SMALL_STATE(28)] = 377,
  [SMALL_STATE(29)] = 396,
  [SMALL_STATE(30)] = 413,
  [SMALL_STATE(31)] = 427,
  [SMALL_STATE(32)] = 443,
  [SMALL_STATE(33)] = 456,
  [SMALL_STATE(34)] = 469,
  [SMALL_STATE(35)] = 482,
  [SMALL_STATE(36)] = 495,
  [SMALL_STATE(37)] = 508,
  [SMALL_STATE(38)] = 521,
  [SMALL_STATE(39)] = 534,
  [SMALL_STATE(40)] = 538,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_expression, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__function_arguments_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_text, 2, 0, 0),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_text, 2, 0, 0), SHIFT_REPEAT(31),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_text, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_text, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [122] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_maxima(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
