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
- The name `str1` is the address of the first char in the string `str1` - the starting location in the string.
- However, `str2` is a pointer to an array of chars.
- So it points to the starting address of the char array.
Look at the following code:

