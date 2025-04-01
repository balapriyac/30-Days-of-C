# Working with Files in C

File handling in C allows you to read, write, and manipulate files efficiently. The standard library provides functions for handling files using `FILE *` pointers.

## Opening and Closing Files
To work with a file, use `fopen()` and always close it with `fclose()`:
```c
FILE *file = fopen("filename.txt", "mode");
fclose(file);
```
Modes:
- `"r"` - Read
- `"w"` - Write (overwrites file)
- `"a"` - Append
- `"rb"`, `"wb"`, `"ab"` - Binary modes

## Writing to a File
Use `fprintf()` or `fwrite()`:
```c
fprintf(file, "Hello, File Handling!");
```

## Reading from a File
Use `fscanf()`, `fgets()`, or `fread()`:
```c
char buffer[100];
fgets(buffer, 100, file);
printf("Read: %s", buffer);
```

## Appending to a File
Use `"a"` mode and `fprintf()`:
```c
fprintf(file, "Appending new data\n");
```

## Binary File Operations
Use `fwrite()` and `fread()`:
```c
struct Data { int id; char name[20]; } d;
fwrite(&d, sizeof(struct Data), 1, file);
```

## Error Handling
Always check if `fopen()` succeeds:
```c
if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
}
```


