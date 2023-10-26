<div align="center">
  <h1>Module 3</h1>
  <br><br><br>
</div>      


# Unit 2: Intro to Functions, Arrays, and Strings
> [Class Exercises](Unit2/class_exercises/) | [Code Examples](Unit2/code_examples/) | [Slides](Unit2/slides/)

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
int arr3[10] = {1, 2, 3};     // First three elements are initialized and the rest are initialized to 0
int arr4[10] = {0};           // All elements are initialized to 0
int arr5[10] = {[0] = 1, [4] = 5}; // Only the 0th and 4th elements are initialized
```
- To access an element in an array, use the index of the element.
```c
int arr[5] = {1, 2, 3, 4, 5};
int first = arr[0]; // first = 1
int last = arr[4];  // last = 5
```
- At compilation, the compiler does not check if the index is out of bounds, so make sure the index is within bounds.
- The name of the array variable is equivalent to the base address (that is, the memory location of the 0th element) of the array.
- When passing an array to a function, the array is passed by reference (specifically, a copy of the base address), so any changes made to the array inside the function will be reflected in the original array. Example: 
```c
void changeArray(int arr[]) {
    arr[0] = 10;
}
 
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    changeArray(arr); // The array's name is used as the argument without the []
    printf("%d\n", arr[0]); // Prints out 10
}
```
- Array elements in C are stored are allocated in consevutive locations in the program's memory.
- Initializing an array with a loop:
```c
int arr[10];
for (int i = 0; i < 10; i++) {
    arr[i] = i;
}
```
> Note that `i < 10` and not `i <= 10` because the index of the last element is 9, not 10.


## Strings 🔤
- Strings are stored as an array of characters.
- Ways to declare a String:
```c
char str1[10] = "Hello"; // 10 is the size of the array
char str2[] = "Hello";   // Size of the array is determined by the length of the string
char *str3 = "Hello";    // Size of the array is determined by the length of the string
```
- A string that has been declared as an array of characters can be modified, but a string that has been declared as a pointer to a string literal cannot be modified.
```c
char str1[] = "Hello"; // This string can be modified
strcpy(str1, "Hello"); // This is allowed

char *str2 = "Hello";  // This string cannot be modified
strcpy(str2, "Hello"); // This is not allowed
```
- Strings are terminated with a null character `\0`, so when declaring a string, you must account for the null character.
- To find the size of a string:
```c
char str[] = "Hello";
int size = sizeof(str);
printf("%d\n", size);   
printf(size); // This is not allowed - Always use format specifiers when printing
```
- To print or read a string, use the `%s` format specifier.
```c
char str[10];
str = "Hello"; // This is not allowed
strcpy(str, "Hello"); // This is allowed
```


### Resources: - [C Programming Language (1.4 - 1.5)](https://diveintosystems.org/book/C1-C_intro/functions.html)

<div><br><br><br><br></div> <!-- spacer -->

# Unit 3: Intro to Structs, Debugging, and the Preprocessor
> [Class Exercises](Unit3/class_exercises/) | [Code Examples](Unit3/code_examples/) | [Slides](Unit3/slides/)

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
### Initializing Structs 
- Declaring an unitialized struct variable:
```c
struct student s1;
```
- Fully Initialized
```c
struct student s1 = {"John", 20, 3.5};
```
- Partially Initialized 
> Keep in mind that to partially initialize a struct, you must initialize the first variable in the struct (Example A), otherwise you must use designated initializers (Example B).
```c
// Example A
struct student s1 = {"John", 20};
// Example B
struct student s1 = {.age = 20, .gpa = 3.5};
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


