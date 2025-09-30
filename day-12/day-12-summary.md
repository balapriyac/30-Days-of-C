# Day 12: Addresses and Indirection – Part 2

## Topics Covered

### 1. Pointer Arithmetic
- Pointers can be incremented or decremented to traverse elements in memory.
- When you add 1 to a pointer, it moves to the next element of its base type.
- Useful for iterating over arrays.

### 2. Arrays and Pointers
- The name of an array is equivalent to a pointer to its first element.
- Accessing array elements using pointers:
```c
  arr[i] == *(arr + i)
```

### 3. Void Pointers
- A void * pointer can hold the address of any data type.
- It cannot be dereferenced directly without casting to the correct pointer type.
- Useful for writing generic functions.


### 4. Function Pointers (Introduction)
- Function pointers store the address of a function.
- They allow calling functions indirectly.


Syntax example:
```c
 void greet() {
    printf("Hello\n");
}

void (*fp)() = greet;
fp();  // Calls greet
```

### 5. Common Pitfalls
- Uninitialized pointers: Always initialize pointers before use.
- Dangling pointers: Pointers that refer to freed or invalid memory.
- Type casting with void pointers: Must cast to correct type before dereferencing. (more on these problems later)


### Summary
- Pointer arithmetic allows moving through memory locations based on data type size.
- Arrays and pointers are closely related; array name is a pointer to the first element.
- Void pointers provide generic pointer functionality but require casting.
- Function pointers enable dynamic and indirect function calls.
- Always be careful with pointer initialization and type correctness.


