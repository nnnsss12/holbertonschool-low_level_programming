# Hash Tables

A project implementing a hash table data structure in C.

## What is a Hash Function?
Takes a key and returns a fixed-size index. A good hash function is fast and distributes keys uniformly.

## What is a Hash Table?
An array where each slot points to a linked list of key/value pairs. Average O(1) for insert, search, and delete.

## What is a Collision?
When two keys produce the same index. Handled here using chaining (linked lists per bucket).

## Advantages
- Fast average-case: O(1)

## Drawbacks
- Worst-case O(n) with many collisions
- No guaranteed order

## Files
| File | Description |
|---|---|
| `hash_tables.h` | Header file |
| `0-hash_table_create.c` | Creates a hash table |

## Compilation
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a
