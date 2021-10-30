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



