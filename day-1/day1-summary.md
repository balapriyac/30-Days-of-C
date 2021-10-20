## C Programming 101
```c
#include <stdio.h>

int main()
{
  printf("C is cool!\n");
  return 0;
}

```
### Making sense of the construct

- **#include**: preprocessor directive that causes the contents of stdio.h to be included
- `< >` around stdio.h: look for this file in the *system* directory
- **int**: return type of the function 
- When you know that a function returns a value, the *type* of the value that it's expected to return precedes the function name
- **main**: program execution starts from the main function
- `()`: the main function here doesn't consume any arguments
- `{}`: delimiters for a block of code
- **printf**: prints out the string of characters passed in as the argument
- `;`: all C statements terminate in a semicolon
- `return 0;`: the code returns `0` when execution is successful  

### Command-line arguments in C

```c
int main(int argc, char **argv)
```
- Run program from the command prompt: ProgramName arg1 arg2 arg3 //args separated by space
- `argc`: number of command-line arguments
- `argv`: list of command-line args; more of an argument vector, or a pointer to an array of character-string arguments

### Introducting `printf()` 
```c
puts("Print a simple string");
printf("Print a formatted string");
```
- Format specifiers (%d, %s etc.) can be replaced with the corresponding values
- These values are specified as a comma-delimited list of values in the `printf()` function

```c
printf("I have been coding in %s for %d years now\n", "C", 2);
```
