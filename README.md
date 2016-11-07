# Eval
Simple numerical expression evaluator

## Features
- Single source file, single header (excluding example main.c file)
- MIT license - Permits use in open and closed source projects
- Written in ANSI C - Eval should run on more or less any platform
- No external dependencies beyond standard libraries (string.h math.h)
- Single argument functions
- Variable substitution

## Why?

Because I needed a small expression evaluator for use in a Cortex-M4 based firmware project I was working on.

## Syntax

### Terms
```
123, 4e5, 3.2, 7.4e-5       Numeric literal.
$name                       Variable names may contain A-Z, a-z, 0-9 and _ character (but cannot start with 0-9).
func(arg)                   Function names follow the same convenion as variables names.
```

### Unary Operators
```
-                           Negates operand.
```

### Binary Operators
```
+                           Adds right operand to left operand.
-                           Subtracts right operand from left operand.
*                           Multplies left operand by right operand.
/                           Divides left operand by right operand.
```

### Default Variables
```
$INFINITY                   Infinity.
$NAN                        IEEE754 'not a number' special value.
$PI                         3.14159265358979
```

### Default Functions

These functions are aliases of those found in math.h:
```
cos
sin
tan
acos
asin
atan
exp
log
log10
log2
sqrt
cbrt
ceil
floor
round
```

