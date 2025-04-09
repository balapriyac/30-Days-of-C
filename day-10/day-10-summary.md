Pointers are variables that store memory addresses. In C, you use the `*` operator to declare a pointer and the `&` operator to get the address of a variable.

```c
int x = 10;
int *p = &x; // p stores the address of x
```

Use `*p` to access the value at the address stored in `p` (dereferencing).

## Key Concepts
- `&x` is the address of x
- `*p` is the value pointed to by p
- `int *p` declares a pointer to an int
