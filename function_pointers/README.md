# Function Pointers in C

A function pointer stores the address of a function and allows calling it indirectly.

## Files

| File | Description |
|------|-------------|
| `function_pointers.h` | Header file with all prototypes |
| `0-print_name.c` | Prints a name using a function pointer |

## Tasks

### 0. What's my name
```c
void print_name(char *name, void (*f)(char *));
```
Calls the function `f` with `name` as argument.
