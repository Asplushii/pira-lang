
pira-lang is a stack-based interpreted programming language.

# Lexical Grammar

```
TOKEN           -> KEYWORD | NUMBER | STRING-LITERAL | IDENTIFIER | NONDIGIT | DIGIT | PUNCTUATOR | KEYWORD
KEYWORD         -> "func" | "if" | "else" | "end" | "let" | "match" | "print" | "input" | "sqrt" | "return" | "null" | "false" | "true"
NUMBER          -> DIGIT+ (. DIGIT+)?
STRING-LITERAL  -> "\" "[^\"]* "\""
IDENTIFIER      -> NONDIGIT (NONDIGIT | DIGIT)*
NONDIGIT        -> "a" - "z" | "A" - "Z" | "_"
DIGIT           -> "0" - "9"
PUNCTUATOR      -> ":" | "(" | ")" | "{" | "}" | "." | "*" | "+" | "-" | "!" | "%" | "<" | ">" | "=" | "<=" | ">=" | "==" | "!=" | "||" | "&&" | ";"
```