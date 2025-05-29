# Type Conversion in C++

## Implicit Type Conversion (Automatic)
- Performed by compiler
- Converts smaller → larger datatype (e.g., int to float)
- Safe and lossless (usually)

## Explicit Type Conversion (Type Casting)
- Done manually by programmer
- Use: `(datatype)value` or `static_cast<type>(value)`
- Can cause data loss (e.g., float to int)

## Type Promotion in Expressions
- If different types in an expression, smaller types are promoted
  - e.g., `char + int` → both treated as int

## Common Conversions
| From     | To       | Conversion Type |
|----------|----------|-----------------|
| `char`   | `int`    | Implicit        |
| `int`    | `float`  | Implicit        |
| `float`  | `int`    | Explicit        |
| `int`    | `char`   | Explicit        |

