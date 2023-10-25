<div align="center">
  <!-- <img src="" alt="Fred Schuck" /> -->
  <h1>General Cheatsheet</h1>
  <br><br><br>
</div>      

## Module 03 - Unit 2: Functions and Arrays in C
- 
- 
- 
## Module 03 - Unit 3: Structs, the Preprocessor and Debugging in C
| Command   | Description                                                     |
|-----------|-----------------------------------------------------------------|
| `break`   | Set a breakpoint                                                |
| `run`     | Start program running from the beginning                       |
| `cont`    | Continue execution of the program until it hits a breakpoint    |
| `quit`    | Quit the GDB session                                           |
| `next`    | Allow the program to execute the next line of C code and then pause it |
| `step`    | Allow the program to execute the next line of C code; if the next line contains a function call, step into the function and pause |
| `list`    | List C source code around the pause point or a specified point |
| `print`   | Print out the value of a program variable (or expression)      |
| `where`   | Print the call stack                                           |
| `frame`   | Move into the context of a specific stack frame                |
## Module 04: Number Systems
- 
- 
- 
## Module 05 - Unit 1: Program Memory, C Pointers and Arrays
### malloc() function
```
int *intArray;
intArray = (int *)malloc(5 * sizeof(int));
```
- 
- 
## Module 05 - Unit 2: The String Library, Structs and I/O
### String Library

| Function               | Description                                                         |
|------------------------|---------------------------------------------------------------------|
| `strlen(str);`         | Returns the length of `str`                                        |
| `strcpy(str1, str2);`  | Copies `str2` into `str1`                                           |
| `strncpy(str1, str2, n);` | Copies `n` characters of `str2` into `str1`                     |
| `strcmp(str1, str2);` | Returns 0 if `str1` and `str2` are equal                           |
| `strncmp(str1, str2, n);` | Returns 0 if the first `n` characters of `str1` and `str2` are equal |
| `strcat(str1, str2);` | Concatenates `str2` onto the end of `str1`                        |
| `strstr(str1, str2);` | Returns a pointer to the first occurrence of `str2` in `str1`     |
| `strchr(str, ch);`    | Returns a pointer to the first occurrence of the character `ch` in `str` |
| `sprintf(str, "%d", n);` | Writes the string form of the integer `n` into `str`           |

- 
- 


## Resources
- [C Programming Language](https://en.wikipedia.org/wiki/C_(programming_language))