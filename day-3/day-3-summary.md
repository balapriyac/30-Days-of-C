### Common Operators
Operators: Special symbols that perform some operations on operands
- Assignment Operator 
```c
int my_var = 27;
```
    - The assignment operator `'='` assigns the value (27) on its right to the variable `my_var` on its left.
    - The type of data assigned should match the data type of the variable.
- Compound Assignment 

```c
a += b  // is the same as: a = a + b
a -= b  // is the same as: a = a - b
a *= b  // is the same as: a = a * b
a /= b  // is the same as: a = a / b

//performs the specified calculation on a, and then assigns the result of the calculation to a.

```
- Increment and Decrement

To add 1 to or subtract 1 from the value of a variable, we use `++` and `--` as well.
```c
int num = 10;
num++; // adds 1 to num; num is now 11
num--; //subtracts 1 from num; num is now 10
```
- Pre and Post-Increment
```c
int a,b;

a = 1;
b = a++; // b is 1, a is 2

// value of a is assigned to b, and then a is incremented by 1

a = 1;
b = ++a; // b is 2, a is 2

// value of a is incremented by 1, and then is assigned to b
```

### Operators for Comparison
- Check Equality

The operator `==` checks equality of expressions on either side of it.
```c
int x = 1; // assigns value of 1 to the integer x
if (x == 1) //checks if the value of x is equal to 1
  {
  // do this
  }

```

- Comparison Operators
```
  == // equals
  != // not equals
  > // greater than
  < // less than
  <= // less than or equal to
  >= // greater than or equal to
```


### Logical Operators

- Logical Operators test truth value of Booleans - True or False.
- They help to chain together conditions, or tests.
- C doesn't have a dedicated boolean data type - all non-zero values are considered True, and 0 is treated as False. 

```c
if ( condition1 && condition2)
    {
    // both condition1 AND condition2 should be True
    }
if ( condition1 ||  condition2)
    {
    // either condition1 OR condition2 should be True
    }
```

### Conditionals 101
- If...Else
```c
if (condition)
  {
  // do this if condition is True
  }
else
  {
  // do this if condition is False
  }

```
## Reading inputs
- Why `gets()` isn't used anymore
    - In the example below, teh suer might as well enter a name that's longer than 10 characters.
    - However, `gets()` will assign *all* that the user enters to the variable `name`.
    - But `name` is declared to be an array of 10 characters.
    - The remaining characters might end up in some part of the memory - unpredictable.
    - And this can even possibly overwrite content on parts of memory that are currently used by another varaible.
```c
char name[10];
gets(name);
```

- How does `fgets()` work?
- Null terminated strings
- Are there any caveats yet?

