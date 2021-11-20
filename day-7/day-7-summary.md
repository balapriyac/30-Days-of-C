## User-Defined Data Types in C
Structures in C can hold items of different data types.

### Structures [Struct]
**Syntax**
```c
struct structName{
  dtype1 var1;
  dtype2 var2;
     .
     .
     .
  dtypeN varN;
  };

```
- Use `struct` keyword, followed by the name of the structure `structName`.
- Between teh set of curly braces `{}`, specify a semi-colon (`;`) delimited list of variables.
- Remember to place a `;` after the closing `}`.

**Creating a variable of `struct` data type**
```c
struct structName structVar;
```
- `structVar` is a variable of the type `structName`.
- However, notice that you cannot directly declare like this: `structName structVar;` - you must include the `struct` keyword.

**Accessing the variables of `struct` data type**
```c
structVar.var1;
structVar.var2;
  .
  .
  .
structVar.varN;
 
```

If you think of struct as a data record, then the variables denote the different field in the data record.

### Typedef

> However, notice that you cannot directly declare like this: `structName structVar;` - you must include the `struct` keyword.

- If you'd like to create `struct` type variables just the way you'd create `int`, `float`, and `char` variables, here's what you can do.

```c
typedef struct structName STRUCTNAME;
```

Now, you can create variables of type `structName` using:
```c
STRUCTNAME structVar;
```
