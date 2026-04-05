# Variadic Functions in C

Variadic functions are functions that accept a variable number of arguments using `stdarg.h`.

## Files

| File | Description |
|------|-------------|
| `variadic_functions.h` | Header file with all prototypes |
| `0-sum_them_all.c` | Returns the sum of all parameters |

## Tasks

### 0. Beauty is variable, ugliness is constant
```c
int sum_them_all(const unsigned int n, ...);
```
Returns the sum of all parameters. If `n == 0`, returns `0`.
