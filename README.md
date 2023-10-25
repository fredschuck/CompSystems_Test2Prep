<div align="center">
  <!-- <img src="" alt="Fred Schuck" /> -->
  <h1>General Cheatsheet</h1>
  <br><br><br>
</div>      



<!--
******************************************************************************************** 
            MODULE 3 
******************************************************************************************** 
-->
## 3️⃣ Module 03 - Unit 2: Functions and Arrays in C
#### [Slides](Module3/Unit2/slides/) | [...Read More](Module3) 
 <!-- [Notes]() | [Resources]() -->


## 3️⃣ Module 03 - Unit 3: Structs, the Preprocessor and Debugging in C
#### [Slides](Module3/Unit3/slides/) | [...Read More](Module3) 
### 1) Compile your program with the `-g` flag.
```
$ gcc -g -o program program.c
```
### 2) Run GDB on your program.
```
$ gdb program
```
### 3) Use the following commands to debug your program.

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

<p align="right">(<a href="#readme-top"> back to top ↑ </a>)</p>





<!--
******************************************************************************************** 
            MODULE 4 
******************************************************************************************** 
-->
## 4️⃣ Module 04: Number Systems
#### [Slides](Module4/slides/) 


<p align="right">(<a href="#readme-top"> back to top ↑ </a>)</p>



<!--
******************************************************************************************** 
            MODULE 5 
******************************************************************************************** 
-->
## 5️⃣ Module 05 - Unit 1: Program Memory, C Pointers and Arrays
#### [Slides](Module5/Unit1/slides/)

### malloc() function
```
int *intArray;
intArray = (int *)malloc(5 * sizeof(int));
```

## 5️⃣ Module 05 - Unit 2: The String Library, Structs and I/O
#### [Slides](Module5/Unit2/slides/)

### <string.h> Library Functions 📚
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


### <ctype.h> Library Functions 📚
| Function        | Description                                      |
|-----------------|--------------------------------------------------|
| `isalpha(ch);` | Returns true if `ch` is a letter                 |
| `isdigit(ch);` | Returns true if `ch` is a digit                  |
| `isalnum(ch);` | Returns true if `ch` is a letter or digit        |
| `isspace(ch);` | Returns true if `ch` is a whitespace character   |
| `isupper(ch);` | Returns true if `ch` is an uppercase letter     |
| `islower(ch);` | Returns true if `ch` is a lowercase letter     |
| `toupper(ch);` | Returns `ch` converted to uppercase             |
| `tolower(ch);` | Returns `ch` converted to lowercase             |


### <stdlib.h> Library Functions 📚
| Function         | Description                             |
|------------------|-----------------------------------------|
| `atoi(str);`     | Converts the string `str` to an integer |
| `atof(str);`     | Converts the string `str` to a double  |

<p align="right">(<a href="#readme-top"> back to top ↑ </a>)</p>

## Resources
- [C Programming Language](https://en.wikipedia.org/wiki/C_(programming_language))


