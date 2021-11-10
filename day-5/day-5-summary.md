## Strings as Array of Chars
- There's no built-in string data type in C.
- You can declare an array of characters, like this.
```c
char my_string[] = {"S","t","r","i","n","g","\0"};
//should include the null terminator

char my_string[] = "String";
// the null terminator '\0' is automatically appended

```

## Declaring Strings [Strings are char arrays]
```c
char str1[] = "string1";
char *str2 = "string2";
```
- The value of the array name `str1` is the address of the first char in the array `str1` - the starting location in the string.
- However, `str2` is a pointer to an array of chars.
- So it points to the starting address of the char array.

Look at the following code:
```c
#include <stdio.h>

int main()
{
    char str1[] = "string1";
    char *str2 = "string2";
    
    printf("%d %d %s \n",str1, &str1, str1);
    printf("%d %d %s \n",str2, &str2, str2);

    return 0;
}
```
- You'll see that `str1 = &str1 //as int` but `str2 ≠ &str2`.
- The value of `str2` is the address of the string - that is, the first char in the string.
- The address of `str2` is a different memory location altogether.
- Put simply, a pointer variable holds the address of, or points to another variable in memory.

## Strings & Functions
### Passing strings to functions
```c
void func(char anystring[]){

    }
    
    //OR
    
void func(char *anystring){

    }
```
### Returning strings from functions
To return a string from a function, set return type to `char *`.
```c

char * this_func(params){
    //statements;
    return <any_string>;
    }
```

## String vs Char - Let's understand!

## Declare strings on the heap

## String Functions

### Use header file `<string.h>`

### Common String Functions

