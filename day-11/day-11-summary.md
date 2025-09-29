
# Day 11: Addresses and Indirection – Part 1

## Topics Covered

### 1. Pointers and Addresses
- A pointer is a variable that stores the memory address of another variable.
- Syntax to declare a pointer:
```c
  int *ptr;
```

This declares `ptr` as a pointer to an integer.

### 2. Address-of Operator (`&`)

* The `&` operator returns the address of a variable.
* Example:

  ```c
  int a = 10;
  int *ptr = &a;
  ```

### 3. Dereferencing Operator (`*`)

* The `*` operator accesses the value at the address stored in a pointer.
* Example:

  ```c
  int a = 10;
  int *ptr = &a;
  printf("%d", *ptr); // prints 10
  ```

### 4. Passing by Reference

* You can pass the **address** of a variable to a function, allowing the function to modify the original value.
* This is also called **pass by reference**.

### 5. Pointer to Pointer

* A pointer can also store the address of another pointer.
* Syntax:

  ```c
  int **pp;
  ```

  `pp` is a pointer to a pointer to an integer.


## Code Example 1: Increment a Value Using a Pointer

```c
#include <stdio.h>

void increment(int *ptr) {
    *ptr = *ptr + 1;
}

int main() {
    int a = 5;
    printf("Before increment: %d\n", a);
    increment(&a);
    printf("After increment: %d\n", a);
    return 0;
}
```

### Explanation:

* `increment()` receives a pointer to `a` and increases its value.
* The original variable `a` is modified in `main()`.


## Code Example 2: Pointer to Pointer Example

```c
#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;
    int **pp = &p;

    printf("Value of a: %d\n", a);
    printf("Value via *p: %d\n", *p);
    printf("Value via **pp: %d\n", **pp);

    printf("Address of a: %p\n", &a);
    printf("Address stored in p: %p\n", p);
    printf("Address of p: %p\n", &p);
    printf("Address stored in pp: %p\n", pp);

    return 0;
}
```

### Explanation:

* `*p` accesses the value of `a`.
* `**pp` accesses the value of `a` via a pointer to a pointer.
* The program prints both the values and addresses to help understand memory relationships.


## Summary

* A pointer holds the address of another variable.
* You can use the `&` operator to get the address and the `*` operator to access the value at that address.
* Functions can modify variables by receiving their addresses.
* Pointer-to-pointer (`int **pp`) lets you indirectly access or modify pointers.

```

