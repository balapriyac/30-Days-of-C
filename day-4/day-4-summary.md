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
- The values of the arguments in the function call are copied to the corresponding parameters
- If the function returns *nothing*, specify return type as `void`
- When the function returns a value, the return value from the function can be assigned to a variable of matching data type
