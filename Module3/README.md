# Unit 2: Intro to Functions, Arrays, and Strings

## Functions 🛠️
- Functions can take zero, one or many arguments, but only return one value.
- Arguments passed to functions are either passed by value or passed by reference (only if using pointers).
- A function **_prototype_** is a declaration of a function that specifies the function's name and type signature (arity, parameter types, and return type), but omits the function body.
- A function **_definition_** is the function prototype plus its body.


```c
// Example of a simple function

int add(int a, int b) {
    return a + b;
}
```

## The Stack 📚
- The stack is a region of memory that is used to store local variables and function arguments. Only local variables and paremeters are in scope.
- The stack is a LIFO (last in, first out) data structure.
- When a function is called, the arguments and local variables are pushed onto the stack. Then when the function returns, the arguments and local variables are popped off the stack.


## Arrays 🔢 
- Different ways to declare an array:
```c
int arr1[10];                 // 10 is the size of the array
int arr2[] = {1, 2, 3, 4, 5}; // Size of the array is determined by the number of elements
```

## Strings 🔤
- Strings are stored as an array of characters.
- Different ways to declare a String:
```c
char str1[10] = "Hello"; // 10 is the size of the array
char str2[] = "Hello";   // Size of the array is determined by the length of the string
char *str3 = "Hello";    // Size of the array is determined by the length of the string
```
- Strings are terminated with a null character `\0`, so when declaring a string, you must account for the null character.


### Resources: - [C Programming Language (1.4 - 1.5)](https://diveintosystems.org/book/C1-C_intro/functions.html)

<div><br><br><br><br></div> <!-- spacer -->

# Unit 3: Intro to Structs, Debugging, and the Preprocessor

## Structs 🏗️

## The Preprocessor ⚙️
[Wiki: Preprocessor Directives and Macros](https://en.wikibooks.org/wiki/C_Programming/Preprocessor_directives_and_macros)

## Debugging with GDB 🕵️ 
1) Compile your program with the `-g` flag.
```
$ gcc -g -o program program.c
```
2) Run GDB on your program.
```
$ gdb program
```
3) Use the following commands to debug your program.

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


### Resources: - [C Programming Language (1.6 - 1.7, 3.1 - 3.2)](https://diveintosystems.org/book/C1-C_intro/structs.html)


