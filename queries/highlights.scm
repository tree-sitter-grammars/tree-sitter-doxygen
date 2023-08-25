(tag_name) @keyword

(identifier) @variable

((tag
  (tag_name) @_param 
  (identifier) @parameter)
  (#any-of? @_param "@param" "\\param"))

(function (identifier) @function)

(emphasis) @text.emphasis

"\\a" @tag

[
  "in"
  "out"
  "inout"
] @storageclass

"~" @operator

[
  ","
  "::"
] @punctuation.delimiter

[ "(" ")" "[" "]" ] @punctuation.bracket
