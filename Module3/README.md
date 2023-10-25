<div align="center">
  <h1>Module 3</h1>
  <br><br><br>
</div>      


# Unit 2: Intro to Functions, Arrays, and Strings
[Class Exercises](Unit2/class_exercises/) | [Code Examples](Unit2/code_examples/) | [Slides](Unit2/slides/)

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
- Ways to declare an array:
```c
int arr1[10];                 // 10 is the size of the array
int arr2[] = {1, 2, 3, 4, 5}; // Size of the array is determined by the number of elements
```
- To access an element in an array, use the index of the element.
```c
int arr[5] = {1, 2, 3, 4, 5};
int first = arr[0]; // first = 1
int last = arr[4];  // last = 5
```
- At compilation, the compiler does not check if the index is out of bounds, so make sure the index is within bounds.
- The name of the array variable is equivalent to the base address (that is, the memory location of the 0th element) of the array.
- When passing an array to a function, the array is passed by reference, so any changes made to the array inside the function will be reflected in the original array. Example: 
```c
void changeArray(int arr[]) {
    arr[0] = 10;
}
 
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    changeArray(arr);
    printf("%d\n", arr[0]); // Prints out 10
}
```


## Strings 🔤
- Strings are stored as an array of characters.
- Ways to declare a String:
```c
char str1[10] = "Hello"; // 10 is the size of the array
char str2[] = "Hello";   // Size of the array is determined by the length of the string
char *str3 = "Hello";    // Size of the array is determined by the length of the string
```
- Strings are terminated with a null character `\0`, so when declaring a string, you must account for the null character.
- To find the size of a string, find the length of the array in **bytes** and divide by the size of a character in **bytes**. Example: `strlen(arr)*8/sizeof(char)*8`.


### Resources: - [C Programming Language (1.4 - 1.5)](https://diveintosystems.org/book/C1-C_intro/functions.html)

<div><br><br><br><br></div> <!-- spacer -->

# Unit 3: Intro to Structs, Debugging, and the Preprocessor
[Class Exercises](Unit3/class_exercises/) | [Code Examples](Unit3/code_examples/) | [Slides](Unit3/slides/)

## Structs 🏗️
- A struct is a collection of variables grouped together under one name.
- A struct can contain variables of different types.
- A struct can be passed to a function by value or by reference.
- Example of a struct:
```c
struct student {
    char *name;
    int age;
    float gpa;
};
```
- Example of declaring a struct variable:
```c
struct student s1;
```
- Example of accessing a struct variable:
```c
s1.name = "John";
s1.age = 20;
s1.gpa = 3.5;
```
- Example of passing a struct to a function by **_value_**:
```c
void printStudent(struct student s) {
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("GPA: %f\n", s.gpa);
}

printStudent(s1);
```
- Example of passing a struct to a function by **_reference_**:
```c
void printStudent(struct student *s) {
    printf("Name: %s\n", s->name);
    printf("Age: %d\n", s->age);
    printf("GPA: %f\n", s->gpa);
}

printStudent(&s1);
```



## The Preprocessor ⚙️
[Wiki: Preprocessor Directives and Macros](https://en.wikibooks.org/wiki/C_Programming/Preprocessor_directives_and_macros)

### Macros
- A macro is a fragment of code which has been given a name and can be used in place of a more verbose code fragment.
- Macros are defined using the `#define` directive.
- Macros are expanded by the preprocessor before compilation.
- Example of a macro:
```c
#define PI 3.14159
```
- Example of using a macro:
```c
float area = PI * radius * radius;
```

### Conditional Compilation
- Conditional compilation allows you to include or exclude code based on certain conditions.
- Conditional compilation is done using the `#if`, `#elif`, `#else`, and `#endif` directives.
- Example of conditional compilation:
```c
#define DEBUG 1

int main() {
    #if DEBUG
        printf("Debugging is on\n");
    #else
        printf("Debugging is off\n");
    #endif
}
```


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


