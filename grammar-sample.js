/* eslint-disable indent */
/* globals grammar, repeat, choice, seq */
module.exports = grammar({
  // Required fields: name? (string), rules (object)
  // Optional fields: extras, inline, conflicts, externals, word (all functions?)
  // Builtins:
  //   $.XYZ, <string>, <regex literal>
  // Grammar functions:
  //   seq(rule1, rule2, ...), choice(rule1, rule2, ...)
  //   repeat(rule), repeat1(rule), optional(rule)
  //   prec(number, rule)
  //   prec.left([number], rule), prec.right([number], rule), prec.dynamic(number, rule)
  //   token(rule), alias(rule, name), field(name, rule)

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.function_definition
      // TODO: other kinds of definitions
    ),

    function_definition: $ => seq(
      'func',
      $.identifier,
      $.parameter_list,
      $._type,
      $.block
    ),

    parameter_list: () => seq(
      '(',
       // TODO: parameters
      ')'
    ),

    _type: () => choice(
      'bool'
      // TODO: other kinds of types
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    _statement: $ => choice(
      $.return_statement
      // TODO: other kinds of statements
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
      ';'
    ),

    _expression: $ => choice(
      $.identifier,
      $.number
      // TODO: other kinds of expressions
    ),

    identifier: () => /[a-z]+/,

    number: () => /\d+/
  }
});
