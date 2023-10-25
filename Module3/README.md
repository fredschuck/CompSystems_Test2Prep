# Unit 2: Functions, Arrays, and Strings

## Functions 🛠️
- Functions can take zero, one or many arguments, but only return one value.
- Arguments passed to functions are either passed by value or passed by reference (only if using pointers).
- A function **_prototype_** is a declaration of a function that specifies the function's name and type signature (arity, parameter types, and return type), but omits the function body.
- A function **_definition_** is the function prototype plus its body.

## Arrays 📊

## Strings 🔤

### Resources: - [C Programming Language (1.4 - 1.5)](https://diveintosystems.org/book/C1-C_intro/functions.html)

<div><br><br><br><br></div> <!-- spacer -->

# Unit 3: Intro to Structs, Debugging, and the Preprocessor

## Structs 🏗️

## The Preprocessor ⚙️

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
