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
### Functions
Like in other languages, functions that do not return a value should explicitly state the return type as void.
```
void my_function(int num){
  if(0 > num){
    printf("Your number is not greater than zero!");
  }
  else{
    printf("Your number is greater than zero!");
  }
}
```
If we wanted to edit this function to return a value, we would do the following:
```
int greater_than(int num){
  if(0 > num){
    printf("Your number is not greater than zero!");
    return 0;
  }
  else{
    printf("Your number is greater than zero!");
    return 1;
  }
}
```
In this case, the function evaluates to "true" if the number is not greater than zero (less than zero). Remember that C interprets 0 as true, and any non-zero number as false.

### The Stack
(From Geeks4Geeks) Stack is a linear data structure that follows a particular order in which the operations are performed.
The execution stack in C uses the FIFO (first in, first out) methodology.
Each function call creates a new stack frame (also known as an activation frame or activation record), and this frame stores the paramaters passed into the function and its local variables. These frames are popped from the top of the stack when the function returns (which is why specifying proper return type and ensuring that each function has a return is so important!)

## 3️⃣ Module 03 - Unit 3: Structs, the Preprocessor and Debugging in C
#### [Slides](Module3/Unit3/slides/) | [...Read More](Module3) 
### Structs
Structs are a collection of data elements of different types. The "elements" of a struct are called members.
Structs are declared with the following format:
```
//declaring a student struct
struct studentT{
   char name[64];
   int age;
   float gpa;
   int grad_year;
}

```

### Debugging using GDB
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

<p align="right">(<a href="#top"> back to top ↑ </a>)</p>





<!--
******************************************************************************************** 
            MODULE 4 
******************************************************************************************** 
-->
## 4️⃣ Module 04: Number Systems
#### [Slides](Module4/slides/) | [...Read More](Module4) 

![image](Module4/resources/convertion_1.png)
<p align="right">(<a href="#top"> back to top ↑ </a>)</p>



<!--
******************************************************************************************** 
            MODULE 5 
******************************************************************************************** 
-->
## 5️⃣ Module 05 - Unit 1: Program Memory, C Pointers and Arrays
#### [Slides](Module5/Unit1/slides/) | [...Read More](Module5) 

### malloc() function
```
int *intArray;
intArray = (int *)malloc(5 * sizeof(int));
```

## 5️⃣ Module 05 - Unit 2: The String Library, Structs and I/O
#### [Slides](Module5/Unit2/slides/) | [...Read More](Module5) 

### <string.h> Library Functions 📚
| Function               | Description                                                         |
|------------------------|---------------------------------------------------------------------|
| `strlen(str);`         | Returns the length of `str`                                         |
| `strcpy(dst, src);`  | Copies `src` into `dst`                                           |
| `strcmp(dst, src);` | Returns 0 if `dst` and `src` are equal                             |
| `strcat(dst, src);` | Concatenates `src` onto the end of `dst`                           |
| `strstr(dst, src);` | Returns a pointer to the first occurrence of `src` in `dst`        |
| `strchr(str, ch);`    | Returns a pointer to the first occurrence of the character `ch` in `str` |
| `sprintf(str, "%d", n);` | Writes the string form of the integer `n` into `str`              |


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

## I/O Functions
```shell
#  redirect a.out's stdin to read from file infile.txt:
$ ./a.out < infile.txt

#  redirect a.out's stdout to print to file outfile.txt:
$ ./a.out > outfile.txt

# redirect a.out's stdout and stderr to a file out.txt
$ ./a.out &> outfile.txt

# redirect all three to different files:
#   (< redirects stdin, 1> stdout, and 2> stderr):
$ ./a.out < infile.txt 1> outfile.txt 2> errorfile.txt
```
### getchar() and putchar()
- `getchar()` reads a single character from stdin.
- `putchar()` writes a single character to stdout.
```c
int ch;
while ((ch = getchar()) != EOF) {
    putchar(ch);
}

<p align="right">(<a href="#top"> back to top ↑ </a>)</p>

## Resources
- [C Programming Language](https://en.wikipedia.org/wiki/C_(programming_language))


