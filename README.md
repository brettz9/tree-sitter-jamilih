# tree-sitter-jamilih

Project not currently functional

## Developing notes

- For editing in Atom, there is a package, [language-tree-test](https://atom.io/packages/language-tree-test), which adds syntax highlighting to tree-sitter test files.

## To-dos

1. Complete parser per <http://tree-sitter.github.io/tree-sitter/creating-parsers>.
  1. See <https://github.com/brettz9/slender/blob/master/reactive.sjson> for format.
  1. See <https://github.com/tree-sitter/tree-sitter-css/blob/master/grammar.js> for
      example.
  1. Add references to Jamilih.
1. Also follow <https://flight-manual.atom.io/hacking-atom/sections/creating-a-grammar/>
    so can get syntax highlighting in Atom. Apply with package [language-babel](https://github.com/gandm/language-babel) (or fork [language-javascript-plus](https://github.com/vokeio/language-javascript-plus) if necessary?) to get highlighting within
    template literals as well.
1. Also develop as [Tagged template](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Template_literals#Tagged_templates) parser.
1. Rollup plugin to do inline conversion (for server-side or static client-side)
