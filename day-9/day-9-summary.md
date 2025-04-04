# Memory Allocation in C

Memory allocation in C allows dynamic allocation and deallocation of memory at runtime using functions from `stdlib.h`.

## Memory Allocation Functions
### a) `malloc`
- Syntax: `ptr = (type*)malloc(size_in_bytes);`
- Allocates uninitialized memory.
- Returns `NULL` if allocation fails.

### b) `calloc`
- Syntax: `ptr = (type*)calloc(num_elements, size_of_each);`
- Allocates and initializes memory to zero.
- Returns `NULL` if allocation fails.

### c) `realloc`
- Syntax: `ptr = (type*)realloc(ptr, new_size_in_bytes);`
- Resizes previously allocated memory.
- Can return `NULL` if resizing fails.

### d) `free`
- Syntax: `free(ptr);`
- Releases dynamically allocated memory.
- Set `ptr = NULL;` after freeing to avoid a dangling pointer.

## Common Issues
- **Memory Leaks**: Forgetting to free memory
- **Dangling Pointers**: Using memory after `free()`
- **Double Free**: Calling `free()` on already freed memory

## What You Should Do
- Always check if memory allocation is successful
- Free memory when it’s no longer needed
- Use `calloc` when you need zero-initialized memory
- Set pointers to `NULL` after freeing


