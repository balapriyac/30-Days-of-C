## Functions
### Why Functions?
Functions provide:
- Modularity
- Code reusability
- Abstraction

### Function Declaration
```c
<return_type> <function_name>(<parameters>);

(<parameters>): (dtype1 param1, dtype2 param2, dtype3 param3)
```

In the function declaration, or the function prototype:
- Parameters are formal parameters
- When the function is called with specific values for these parameters, they're called arguments
- Arguments are also the actual parameters
- The values of the arguments in the function call are copied to the corresponding parameters
- If the function returns *nothing*, specify return type as `void`
- When the function returns a value, the return value from the function can be assigned to a variable of matching data type

### Arguments are passed by value
Consider the code snippet below:
```c
void add2(int num)//function definition
{
  num += 2;
}

int main()
{
  int num = 10;
  add2();
  printf("num is: %d", num);
  return 0;
}
```
- Modifying `num` inside the function `add2()` does not alter the value of `num` in the `main()` function
- It's the value of `num` that's passed to the `add2()` function

### Switch Statement
Switch statements can be good alternatives to long `if...else if..else` ladders.
```c
switch(test)
{
  case case1:
    //do this
    break;
  case case2:
    //do this
    break;
  case case3:
    //do this
    break;
      :
      :
      :
  default:
    //do this
}
```

Here, 
- `test`: test statement, should be an integer or evaluating to an integer
- The test value is compared against the case values `case1`, `case2`, and so on
- If a matching case is found, then the statements corresponding to that case are executed
- To break out of the switch-case, `break;` statement is required
- If you don't include it, even if a match is found much earlier, the execution trickles down all the way until the next `break` statement appears!
- The `default` case is executed only when no matching case exists, and is *optional*.

## Arrays
- An array is a collection of items of the same data type.
- To declare an array, use the syntax:

```c
<data_type> <array_name>[<num_items>];
```
- For an array of length `num_items`, the valid indices are 0,1,2,..., `num_items - 1`.
- To initialize an array, you can use one of the following:
```c
int array1[3];
array1[0] = 1;
array1[1] = 2;
array1[2] = 3;

//OR

int array1[3] = {1,2,3};

//OR
int array1[] = {1,2,3};

```

### Strings as Array of Chars
- There's no built-in string data type in C.
- You can declare an array of characters, like this.
```c
char my_string[] = {"S","t","r","i","n","g","\0"};
//should include the null terminator

char my_string[] = "String";
// the null terminator '\0' is automatically appended

```

## `For` and `While` Loops


## Loop Control Statements




