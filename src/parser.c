#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 48
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_doctype = 1,
  aux_sym_comment_token1 = 2,
  sym_start_comment = 3,
  sym_end_comment = 4,
  sym_start_element = 5,
  sym_identifier = 6,
  anon_sym_DQUOTE = 7,
  anon_sym_SQUOTE = 8,
  anon_sym_BQUOTE = 9,
  sym_attribute_namevalue_sep = 10,
  sym_attribute_sep = 11,
  sym_opening_attributes = 12,
  sym_closing_attributes = 13,
  sym_start_children = 14,
  sym_end_children = 15,
  sym_end_element = 16,
  sym_text = 17,
  sym_source_file = 18,
  sym_html_document = 19,
  sym_html_fragment = 20,
  sym_comment = 21,
  sym_element = 22,
  sym_element_name = 23,
  sym_attributes = 24,
  sym_unenclosed_attributes = 25,
  sym_attribute_seq = 26,
  sym_attribute = 27,
  sym_attribute_name = 28,
  sym_identifier_seq = 29,
  sym_quoted_identifier = 30,
  sym_double_quoted_identifier = 31,
  sym_single_quoted_identifier = 32,
  sym_backtick_quoted_identifier = 33,
  sym_attribute_value = 34,
  sym_enclosed_attributes = 35,
  sym_children = 36,
  aux_sym_html_fragment_repeat1 = 37,
  aux_sym_unenclosed_attributes_repeat1 = 38,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_doctype] = "doctype",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_start_comment] = "start_comment",
  [sym_end_comment] = "end_comment",
  [sym_start_element] = "start_element",
  [sym_identifier] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [sym_attribute_namevalue_sep] = "attribute_namevalue_sep",
  [sym_attribute_sep] = "attribute_sep",
  [sym_opening_attributes] = "opening_attributes",
  [sym_closing_attributes] = "closing_attributes",
  [sym_start_children] = "start_children",
  [sym_end_children] = "end_children",
  [sym_end_element] = "end_element",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym_html_document] = "html_document",
  [sym_html_fragment] = "html_fragment",
  [sym_comment] = "comment",
  [sym_element] = "element",
  [sym_element_name] = "element_name",
  [sym_attributes] = "attributes",
  [sym_unenclosed_attributes] = "unenclosed_attributes",
  [sym_attribute_seq] = "attribute_seq",
  [sym_attribute] = "attribute",
  [sym_attribute_name] = "attribute_name",
  [sym_identifier_seq] = "identifier_seq",
  [sym_quoted_identifier] = "quoted_identifier",
  [sym_double_quoted_identifier] = "double_quoted_identifier",
  [sym_single_quoted_identifier] = "single_quoted_identifier",
  [sym_backtick_quoted_identifier] = "backtick_quoted_identifier",
  [sym_attribute_value] = "attribute_value",
  [sym_enclosed_attributes] = "enclosed_attributes",
  [sym_children] = "children",
  [aux_sym_html_fragment_repeat1] = "html_fragment_repeat1",
  [aux_sym_unenclosed_attributes_repeat1] = "unenclosed_attributes_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_start_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_end_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_start_element] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_namevalue_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_opening_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_closing_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_start_children] = {
    .visible = true,
    .named = true,
  },
  [sym_end_children] = {
    .visible = true,
    .named = true,
  },
  [sym_end_element] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_html_document] = {
    .visible = true,
    .named = true,
  },
  [sym_html_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_element_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_unenclosed_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_seq] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_seq] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_backtick_quoted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_enclosed_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_children] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_html_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unenclosed_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'y') ADVANCE(9);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_doctype);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_start_comment);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_end_comment);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_start_element);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_attribute_namevalue_sep);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_attribute_sep);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_opening_attributes);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_closing_attributes);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_start_children);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_end_children);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_end_element);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != ']') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != ']') ADVANCE(31);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_doctype] = ACTIONS(1),
    [sym_start_comment] = ACTIONS(1),
    [sym_end_comment] = ACTIONS(1),
    [sym_start_element] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_attribute_namevalue_sep] = ACTIONS(1),
    [sym_attribute_sep] = ACTIONS(1),
    [sym_opening_attributes] = ACTIONS(1),
    [sym_closing_attributes] = ACTIONS(1),
    [sym_start_children] = ACTIONS(1),
    [sym_end_children] = ACTIONS(1),
    [sym_end_element] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym_html_document] = STATE(46),
    [sym_html_fragment] = STATE(46),
    [sym_comment] = STATE(12),
    [sym_element] = STATE(12),
    [aux_sym_html_fragment_repeat1] = STATE(12),
    [sym_doctype] = ACTIONS(3),
    [sym_start_comment] = ACTIONS(5),
    [sym_start_element] = ACTIONS(7),
    [sym_text] = ACTIONS(9),
  },
  [2] = {
    [sym_attributes] = STATE(25),
    [sym_unenclosed_attributes] = STATE(27),
    [sym_attribute_seq] = STATE(3),
    [sym_attribute] = STATE(15),
    [sym_attribute_name] = STATE(29),
    [sym_identifier_seq] = STATE(37),
    [sym_quoted_identifier] = STATE(7),
    [sym_double_quoted_identifier] = STATE(8),
    [sym_single_quoted_identifier] = STATE(8),
    [sym_backtick_quoted_identifier] = STATE(8),
    [sym_enclosed_attributes] = STATE(27),
    [sym_children] = STATE(35),
    [aux_sym_unenclosed_attributes_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_BQUOTE] = ACTIONS(17),
    [sym_opening_attributes] = ACTIONS(19),
    [sym_start_children] = ACTIONS(21),
    [sym_end_element] = ACTIONS(23),
  },
  [3] = {
    [sym_attribute_seq] = STATE(4),
    [sym_attribute] = STATE(15),
    [sym_attribute_name] = STATE(29),
    [sym_identifier_seq] = STATE(37),
    [sym_quoted_identifier] = STATE(7),
    [sym_double_quoted_identifier] = STATE(8),
    [sym_single_quoted_identifier] = STATE(8),
    [sym_backtick_quoted_identifier] = STATE(8),
    [aux_sym_unenclosed_attributes_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_BQUOTE] = ACTIONS(17),
    [sym_start_children] = ACTIONS(25),
    [sym_end_element] = ACTIONS(25),
  },
  [4] = {
    [sym_attribute_seq] = STATE(4),
    [sym_attribute] = STATE(15),
    [sym_attribute_name] = STATE(29),
    [sym_identifier_seq] = STATE(37),
    [sym_quoted_identifier] = STATE(7),
    [sym_double_quoted_identifier] = STATE(8),
    [sym_single_quoted_identifier] = STATE(8),
    [sym_backtick_quoted_identifier] = STATE(8),
    [aux_sym_unenclosed_attributes_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(36),
    [sym_start_children] = ACTIONS(39),
    [sym_end_element] = ACTIONS(39),
  },
  [5] = {
    [sym_attribute_seq] = STATE(32),
    [sym_attribute] = STATE(15),
    [sym_attribute_name] = STATE(29),
    [sym_identifier_seq] = STATE(37),
    [sym_quoted_identifier] = STATE(7),
    [sym_double_quoted_identifier] = STATE(8),
    [sym_single_quoted_identifier] = STATE(8),
    [sym_backtick_quoted_identifier] = STATE(8),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_BQUOTE] = ACTIONS(17),
  },
  [6] = {
    [sym_identifier_seq] = STATE(16),
    [sym_quoted_identifier] = STATE(7),
    [sym_double_quoted_identifier] = STATE(8),
    [sym_single_quoted_identifier] = STATE(8),
    [sym_backtick_quoted_identifier] = STATE(8),
    [sym_attribute_value] = STATE(17),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_BQUOTE] = ACTIONS(17),
  },
  [7] = {
    [sym_identifier] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [sym_attribute_namevalue_sep] = ACTIONS(41),
    [sym_attribute_sep] = ACTIONS(41),
    [sym_closing_attributes] = ACTIONS(41),
    [sym_start_children] = ACTIONS(41),
    [sym_end_element] = ACTIONS(41),
  },
  [8] = {
    [sym_identifier] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [sym_attribute_namevalue_sep] = ACTIONS(43),
    [sym_attribute_sep] = ACTIONS(43),
    [sym_closing_attributes] = ACTIONS(43),
    [sym_start_children] = ACTIONS(43),
    [sym_end_element] = ACTIONS(43),
  },
  [9] = {
    [sym_identifier] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [sym_attribute_namevalue_sep] = ACTIONS(45),
    [sym_attribute_sep] = ACTIONS(45),
    [sym_closing_attributes] = ACTIONS(45),
    [sym_start_children] = ACTIONS(45),
    [sym_end_element] = ACTIONS(45),
  },
  [10] = {
    [sym_identifier] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [sym_attribute_namevalue_sep] = ACTIONS(47),
    [sym_attribute_sep] = ACTIONS(47),
    [sym_closing_attributes] = ACTIONS(47),
    [sym_start_children] = ACTIONS(47),
    [sym_end_element] = ACTIONS(47),
  },
  [11] = {
    [sym_identifier] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [anon_sym_BQUOTE] = ACTIONS(49),
    [sym_attribute_namevalue_sep] = ACTIONS(49),
    [sym_attribute_sep] = ACTIONS(49),
    [sym_closing_attributes] = ACTIONS(49),
    [sym_start_children] = ACTIONS(49),
    [sym_end_element] = ACTIONS(49),
  },
  [12] = {
    [sym_comment] = STATE(13),
    [sym_element] = STATE(13),
    [aux_sym_html_fragment_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_start_comment] = ACTIONS(5),
    [sym_start_element] = ACTIONS(7),
    [sym_end_children] = ACTIONS(53),
    [sym_text] = ACTIONS(55),
  },
  [13] = {
    [sym_comment] = STATE(13),
    [sym_element] = STATE(13),
    [aux_sym_html_fragment_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_start_comment] = ACTIONS(59),
    [sym_start_element] = ACTIONS(62),
    [sym_end_children] = ACTIONS(65),
    [sym_text] = ACTIONS(67),
  },
  [14] = {
    [sym_html_fragment] = STATE(34),
    [sym_comment] = STATE(12),
    [sym_element] = STATE(12),
    [aux_sym_html_fragment_repeat1] = STATE(12),
    [sym_start_comment] = ACTIONS(5),
    [sym_start_element] = ACTIONS(7),
    [sym_end_children] = ACTIONS(70),
    [sym_text] = ACTIONS(9),
  },
  [15] = {
    [sym_identifier] = ACTIONS(72),
    [anon_sym_DQUOTE] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(72),
    [anon_sym_BQUOTE] = ACTIONS(72),
    [sym_attribute_sep] = ACTIONS(74),
    [sym_closing_attributes] = ACTIONS(72),
    [sym_start_children] = ACTIONS(72),
    [sym_end_element] = ACTIONS(72),
  },
  [16] = {
    [sym_identifier] = ACTIONS(76),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(76),
    [anon_sym_BQUOTE] = ACTIONS(76),
    [sym_attribute_sep] = ACTIONS(76),
    [sym_closing_attributes] = ACTIONS(76),
    [sym_start_children] = ACTIONS(76),
    [sym_end_element] = ACTIONS(76),
  },
  [17] = {
    [sym_identifier] = ACTIONS(78),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [anon_sym_SQUOTE] = ACTIONS(78),
    [anon_sym_BQUOTE] = ACTIONS(78),
    [sym_attribute_sep] = ACTIONS(78),
    [sym_closing_attributes] = ACTIONS(78),
    [sym_start_children] = ACTIONS(78),
    [sym_end_element] = ACTIONS(78),
  },
  [18] = {
    [sym_html_fragment] = STATE(45),
    [sym_comment] = STATE(12),
    [sym_element] = STATE(12),
    [aux_sym_html_fragment_repeat1] = STATE(12),
    [sym_start_comment] = ACTIONS(5),
    [sym_start_element] = ACTIONS(7),
    [sym_text] = ACTIONS(9),
  },
  [19] = {
    [sym_identifier] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [sym_opening_attributes] = ACTIONS(80),
    [sym_start_children] = ACTIONS(80),
    [sym_end_element] = ACTIONS(80),
  },
  [20] = {
    [sym_identifier] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(82),
    [anon_sym_BQUOTE] = ACTIONS(82),
    [sym_closing_attributes] = ACTIONS(82),
    [sym_start_children] = ACTIONS(82),
    [sym_end_element] = ACTIONS(82),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_start_comment] = ACTIONS(86),
    [sym_start_element] = ACTIONS(86),
    [sym_end_children] = ACTIONS(86),
    [sym_text] = ACTIONS(84),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_start_comment] = ACTIONS(90),
    [sym_start_element] = ACTIONS(90),
    [sym_end_children] = ACTIONS(90),
    [sym_text] = ACTIONS(88),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_start_comment] = ACTIONS(94),
    [sym_start_element] = ACTIONS(94),
    [sym_end_children] = ACTIONS(94),
    [sym_text] = ACTIONS(92),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [sym_start_comment] = ACTIONS(98),
    [sym_start_element] = ACTIONS(98),
    [sym_end_children] = ACTIONS(98),
    [sym_text] = ACTIONS(96),
  },
  [25] = {
    [sym_children] = STATE(36),
    [sym_start_children] = ACTIONS(21),
    [sym_end_element] = ACTIONS(100),
  },
  [26] = {
    [sym_start_children] = ACTIONS(102),
    [sym_end_element] = ACTIONS(102),
  },
  [27] = {
    [sym_start_children] = ACTIONS(104),
    [sym_end_element] = ACTIONS(104),
  },
  [28] = {
    [sym_element_name] = STATE(2),
    [sym_identifier] = ACTIONS(106),
  },
  [29] = {
    [sym_attribute_namevalue_sep] = ACTIONS(108),
  },
  [30] = {
    [anon_sym_SQUOTE] = ACTIONS(110),
  },
  [31] = {
    [anon_sym_BQUOTE] = ACTIONS(112),
  },
  [32] = {
    [sym_closing_attributes] = ACTIONS(114),
  },
  [33] = {
    [sym_end_element] = ACTIONS(116),
  },
  [34] = {
    [sym_end_children] = ACTIONS(118),
  },
  [35] = {
    [sym_end_element] = ACTIONS(100),
  },
  [36] = {
    [sym_end_element] = ACTIONS(120),
  },
  [37] = {
    [sym_attribute_namevalue_sep] = ACTIONS(122),
  },
  [38] = {
    [anon_sym_DQUOTE] = ACTIONS(124),
  },
  [39] = {
    [aux_sym_comment_token1] = ACTIONS(126),
  },
  [40] = {
    [sym_identifier] = ACTIONS(128),
  },
  [41] = {
    [sym_identifier] = ACTIONS(130),
  },
  [42] = {
    [sym_identifier] = ACTIONS(132),
  },
  [43] = {
    [sym_end_comment] = ACTIONS(134),
  },
  [44] = {
    [sym_end_element] = ACTIONS(136),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(138),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(140),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(142),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(18),
  [5] = {.count = 1, .reusable = false}, SHIFT(39),
  [7] = {.count = 1, .reusable = false}, SHIFT(28),
  [9] = {.count = 1, .reusable = true}, SHIFT(12),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, SHIFT(42),
  [15] = {.count = 1, .reusable = true}, SHIFT(41),
  [17] = {.count = 1, .reusable = true}, SHIFT(40),
  [19] = {.count = 1, .reusable = true}, SHIFT(5),
  [21] = {.count = 1, .reusable = true}, SHIFT(14),
  [23] = {.count = 1, .reusable = true}, SHIFT(23),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_unenclosed_attributes, 1),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unenclosed_attributes_repeat1, 2), SHIFT_REPEAT(7),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unenclosed_attributes_repeat1, 2), SHIFT_REPEAT(42),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unenclosed_attributes_repeat1, 2), SHIFT_REPEAT(41),
  [36] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unenclosed_attributes_repeat1, 2), SHIFT_REPEAT(40),
  [39] = {.count = 1, .reusable = true}, REDUCE(aux_sym_unenclosed_attributes_repeat1, 2),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_identifier_seq, 1),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_identifier, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_double_quoted_identifier, 3),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_backtick_quoted_identifier, 3),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_single_quoted_identifier, 3),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_html_fragment, 1),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_html_fragment, 1),
  [55] = {.count = 1, .reusable = true}, SHIFT(13),
  [57] = {.count = 1, .reusable = true}, REDUCE(aux_sym_html_fragment_repeat1, 2),
  [59] = {.count = 2, .reusable = false}, REDUCE(aux_sym_html_fragment_repeat1, 2), SHIFT_REPEAT(39),
  [62] = {.count = 2, .reusable = false}, REDUCE(aux_sym_html_fragment_repeat1, 2), SHIFT_REPEAT(28),
  [65] = {.count = 1, .reusable = false}, REDUCE(aux_sym_html_fragment_repeat1, 2),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_html_fragment_repeat1, 2), SHIFT_REPEAT(13),
  [70] = {.count = 1, .reusable = false}, SHIFT(33),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_seq, 1),
  [74] = {.count = 1, .reusable = true}, SHIFT(20),
  [76] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_value, 1),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 3),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_element_name, 1),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_seq, 2),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 3),
  [86] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 3),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_element, 5),
  [90] = {.count = 1, .reusable = false}, REDUCE(sym_element, 5),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym_element, 3),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_element, 4),
  [98] = {.count = 1, .reusable = false}, REDUCE(sym_element, 4),
  [100] = {.count = 1, .reusable = true}, SHIFT(24),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_enclosed_attributes, 3),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_attributes, 1),
  [106] = {.count = 1, .reusable = true}, SHIFT(19),
  [108] = {.count = 1, .reusable = true}, SHIFT(6),
  [110] = {.count = 1, .reusable = true}, SHIFT(11),
  [112] = {.count = 1, .reusable = true}, SHIFT(10),
  [114] = {.count = 1, .reusable = true}, SHIFT(26),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_children, 2),
  [118] = {.count = 1, .reusable = true}, SHIFT(44),
  [120] = {.count = 1, .reusable = true}, SHIFT(22),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_name, 1),
  [124] = {.count = 1, .reusable = true}, SHIFT(9),
  [126] = {.count = 1, .reusable = true}, SHIFT(43),
  [128] = {.count = 1, .reusable = true}, SHIFT(31),
  [130] = {.count = 1, .reusable = true}, SHIFT(30),
  [132] = {.count = 1, .reusable = true}, SHIFT(38),
  [134] = {.count = 1, .reusable = true}, SHIFT(21),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_children, 3),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_html_document, 2),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [142] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jamilih(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
