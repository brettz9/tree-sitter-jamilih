/* eslint-disable indent */
/* globals grammar, repeat1, choice, seq, optional */
module.exports = grammar({
  name: 'jamilih',

  rules: {
    // TODO: complete the grammar rules and test

    // FILE

    source_file: $ => choice(
      $.html_document,
      $.html_fragment
    ),

      html_document: $ => seq(
        $.doctype,

        // Note that this may be multiple elements
        $.html_fragment
      ),

      html_fragment: $ => repeat1(choice(
        $.comment,
        $.element,
        $.text
      )),

    // DOCUMENT ELEMENTS

    doctype: (/* $ */) => '<$doctype>',

    comment: $ => seq(
      $.start_comment,
      // Todo: Fix to require escaping
      /.+/,
      $.end_comment
    ),

      start_comment: (/* $ */) => '<-',

      end_comment: (/* $ */) => '->',

    element: $ => seq(
      $.start_element,
      $.element_name,
      optional($.attributes),
      optional($.children),
      $.end_element
    ),

      start_element: (/* $ */) => '<',

      element_name: $ => $.identifier,

        identifier: (/* $ */) => /\w+/,

      attributes: $ => choice(
        $.unenclosed_attributes,
        $.enclosed_attributes
      ),

        unenclosed_attributes: $ => repeat1(
          $.attribute_seq
        ),

          attribute_seq: $ => seq($.attribute, optional($.attribute_sep)),

          attribute: $ => seq(
            $.attribute_name,
            $.attribute_namevalue_sep,
            $.attribute_value
          ),

            attribute_name: $ => $.identifier_seq,

            identifier_seq: $ => choice(
              $.identifier,
              $.quoted_identifier
            ),

            quoted_identifier: $ => choice(
              $.double_quoted_identifier,
              $.single_quoted_identifier,
              $.backtick_quoted_identifier
            ),

              // Todo: Make exceptions for unescaped inner quotes

              double_quoted_identifier: $ => seq('"', $.identifier, '"'),

              single_quoted_identifier: $ => seq("'", $.identifier, "'"),

              backtick_quoted_identifier: $ => seq('`', $.identifier, '`'),

            attribute_namevalue_sep: (/* $ */) => ':',

            attribute_value: $ => $.identifier_seq,

          attribute_sep: (/* $ */) => ',',

        enclosed_attributes: $ => seq(
          $.opening_attributes,
          $.attribute_seq,
          $.closing_attributes
        ),

          opening_attributes: (/* $ */) => '{',

          closing_attributes: (/* $ */) => '}',

      children: $ => seq(
        $.start_children,
        optional($.html_fragment),
        $.end_children
      ),

        start_children: (/* $ */) => '[',

        end_children: (/* $ */) => ']',

      end_element: (/* $ */) => '>',

    // Todo: tilde-escaped, etc.?
    text: ( /* $ */ ) => /[^<\]]+/,
  }
});
