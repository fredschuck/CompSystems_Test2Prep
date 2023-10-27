<div align="center">
  <h1>Module 5</h1>
  <br><br><br>
</div>      

# Unit 1: Program Memory, C Pointers and Arrays
> [Code Examples](Unit1/code_examples/) | [Slides](Unit1/slides/)

## Scope
- Global variables can be used anywhere in the program - they are declared outside of any function.
- Local variables can only be used in the function they are declared in.

## Memory

### Code
- Program's instructions are stored here.

### Data
- Global variables are stored here.

### Heap
- Dynamically allocated memory is stored here.
- The heap is a variable size.
- The heap is not LIFO.
- Part of a program’s address space associated with dynamic memory allocation

### Stack
- Local variables and function parameters are stored here.
- The stack is used to store local variables and function parameters.
- The stack is a LIFO (last in, first out) data structure.
- The stack is a fixed size.
- Local variables are pushed onto the stack when the function is called and popped off when the function returns.
- Stack storage space for local variables and parameters exists only when the function is active.
- Statically declared arrays are stored here.

## Pointers

- A pointer is a variable that stores the address of another variable.
- Pointers can be used to pass variables by reference to functions.
- Pointers are declared with the following format:
```c
int x;
int *ptr; 
ptr = &x;
```
- To access the value of the variable that a pointer points to, we use the dereference operator (*):
```c
ptr = 5;  // wrong
*ptr = 5; // correct - this accesses the value of what ptr is pointing to and sets it to 5
```
- To assign one pointer to the value of another, we can use the following:
```c
*ptr1 = *ptr2; // wrong
ptr1 = ptr2;   // correct
```
- Other pointer operations:
```c
int *ptr1, *ptr2, x, y;
ptr2 = &x;
ptr1 = NULL;

*ptr2 = 10;    // access that value of what ptr2 is pointing to (x) and set it to 10
y = *ptr2 + 3; // y = 10
ptr1 = ptr2;   // ptr1 now is pointing to what ptr2 is pointing to
```
- Functions can return pointers:
```c
int *max(int *a, int *b){
   if(*a > *b){
      return a;
   }
   else{
      return b;
   }
}
```
- Pointers can be used to access struct members:
```c
struct studentT{
   char name[64];
   int age;
   float gpa;
   int grad_year;
};

struct studentT student;
struct studentT *ptr = &student;
```


## Dynamic Memory Allocation

### Malloc
- Requires `<stdlib.h>`
- Allocates a block of memory but doesn't initialize it.
- Returns a void pointer by default.
- Once memory has been alocated, it must be freed with `free()` at the end of the function or program.
- `malloc()` returns a pointer to the allocated memory.
- `malloc()` only takes one argument: the number of bytes to allocate.
- `malloc()` returns a void pointer, which means that it can be used to allocate memory of any data type. Best practice is to cast the result of `malloc()` to the appropriate data type:
```c
int *ptr = (int *) malloc(sizeof(int));
char *ptr = (char *) malloc(sizeof(char));
float *ptr = (float *) malloc(sizeof(float));
double *ptr = (double *) malloc(sizeof(double));
struct student *ptr = (struct student *) malloc(sizeof(struct student)); // Remember this!
```
- `malloc()` returns NULL if it fails to allocate memory, so it is good practice to check for this:
```c
int *ptr = (int *) malloc(sizeof(int));
if(ptr == NULL){
   printf("Error! Memory not allocated.");
   exit(0);
}

free(ptr); // Free the pointer
ptr = NULL; // It's recommended to set pointer to NULL after freeing
```
- To allocate memory for an array, we can use the following:
```c
// We need to allocate for the full array, so we multiply the size of the data type by the number of elements in the array.
int *ptr = (int *) malloc(5 * sizeof(int));
char *ptr = (char *) malloc(5 * sizeof(char));
float *ptr = (float *) malloc(5 * sizeof(float));
```

### Calloc and Realloc
- `calloc()` is similar to `malloc()`, but it takes two arguments: the number of elements to allocate and the size of each element.
```c
int *ptr = (int *) calloc(5, sizeof(int));
``` 
- `calloc()` allocates a block of memory and clears it.
- `realloc()` is used to reallocate memory. It takes two arguments: the pointer to the previously allocated memory and the new size.
```c
int *ptr = (int *) malloc(5 * sizeof(int));
ptr = realloc(ptr, 10 * sizeof(int));
```


## Pointers and Arrays

- Pointers can be used to access array elements:
```c
int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr;
```
- When trying to access an element of a dynamically allocated array, we can use the following:
```c
int *ptr = (int *) malloc(5 * sizeof(int)); // typically an int = 4 bytes
*(ptr + 2) = 5; // This is considered pointer arithmetic
    /* or */
ptr[2] = 5; // Notice that * is not used here when accessing the element
```
### 2D Arrays
- 2D Arrays are declared as follows:
```c
//        rows cols
int matrix[50][100]; 
```
- To access an element of a 2D array, we can use the following:
```c
int i, j;

for (i = 0; i < 50; i++) {  // for each row first
    for (j = 0; j < 100; j++) { // for each column second
        matrix[i][j] = 0;
    }
}
```
- Dynamically allocated 2D arrays are declared as follows:
```c
int *matrix = (int *) malloc(sizeof(int) * (rows * cols));
```
- To point to a specific element of a 2D array, we can use the following:
```c
p = &matrix[2][3]; // p points to matrix[2][3]
```
- We can also process the elements in just one row of a 2D array by initializing the pointer to the first element of th selected row:
```c
int *p, matrix[50][100];
p = matrix[2]; // p points to matrix[2][0]
```

### Pointer Arithmetic
- Remember that an array by itself `arr` is a pointer to the first element of the array.
- Example of pointer addition
```c
p = &a[2]; // p points to a[2]
q = p + 3; // q points to a[5] (3 elements after a[2])
p += 6;   // p points to a[8] (6 elements after a[2])
```
- `arr+3` is equivalent to `&arr[3]` - It moves the pointer 3 elements from the start of the array.
- Examples of pointer arithmetic using loops:
```c
int *ap, nums[3] = {10, 20, 30};
int sum = 0;
for (ap = nums; ap < nums + 3; ap++) {
    sum += *ap;
}

int *ap, nums[3] = {10, 20, 30};
int dif = 0;
for (ap = &(nums[3]); ap < &(nums[3]); ap--) {
    dif -= *ap;
}
```

### Resources: - [C Programming Language (2.1 - 2.5)](https://diveintosystems.org/book/C2-C_depth/scope_memory.html)


<div><br><br><br><br></div> <!-- spacer -->


# Unit 2: The String Library, Structs and I/O
> [Code Examples](Unit2/code_examples/) | [Slides](Unit2/slides/)

## Operations on String Literals
- String literals can be subscripted just like arrays:
```c
char ch;
ch = "Hello"[1]; // ch = 'e'

char digit_to_hex(int n){
   return "0123456789ABCDEF"[n];
}
```
- Do not attempt to modify string literals:
- Ensure to add space for the null character when declaring a string literal:
```c
char str[6] = "Hello"; // str = "Hello\0"
```
- If initializing a string literal that is shorter than the array, the remaining elements will be set to null:
```c
char str[6] = "Hi"; // str = "Hi\0\0\0"
```
- A string literal declared with a pointer cannot be modified, but the pointer can be changed to point to a different string:
```c
char *str = "Hello"; // str points to "Hello"
str = "Hi"; // str now points to "Hi"
```
- `char str[] = "Hello"` can be modified by using strcpy, for example. 

## String Library Functions

| Function               | Description                                                         |
|------------------------|---------------------------------------------------------------------|
| `strlen(str);`         | Returns the length of `str`                                         |
| `strcpy(dst, src);`  | Copies `src` into `dst`                                           |
| `strncpy(dst, src, n);` | Copies `n` characters of `src` into `dst`                      |
| `strcmp(dst, src);` | Returns 0 if `dst` and `src` are equal                             |
| `strncmp(dst, src, n);` | Returns 0 if the first `n` characters of `dst` and `src` are equal |
| `strcat(dst, src);` | Concatenates `src` onto the end of `dst`                           |
| `strstr(dst, src);` | Returns a pointer to the first occurrence of `src` in `dst`        |
| `strchr(str, ch);`    | Returns a pointer to the first occurrence of the character `ch` in `str` |
| `sprintf(str, "%d", n);` | Writes the string form of the integer `n` into `str`              |


### <ctype.h> Library Functions 📚
| Function        | Description                                      |
|-----------------|--------------------------------------------------|
| `isalpha(ch);` | Returns true if `ch` is a letter                  |
| `isdigit(ch);` | Returns true if `ch` is a digit                   |
| `isalnum(ch);` | Returns true if `ch` is a letter or digit         |
| `isspace(ch);` | Returns true if `ch` is a whitespace character    |
| `isupper(ch);` | Returns true if `ch` is an uppercase letter       |
| `islower(ch);` | Returns true if `ch` is a lowercase letter        |
| `toupper(ch);` | Returns `ch` converted to uppercase               |
| `tolower(ch);` | Returns `ch` converted to lowercase               |


### <stdlib.h> Library Functions 📚
| Function         | Description                             |
|------------------|-----------------------------------------|
| `atoi(str);`     | Converts the string `str` to an integer |
| `atof(str);`     | Converts the string `str` to a double   |


## ascanf() and aprintf() Functions
- `sscanf()` and `sprintf()` are used to read and write formatted data from strings.
```c
int sscanf(str, "%d", &n); // Reads the string form of the integer n into str
int sprintf(str, "%d", n); // Writes the string form of the integer n into str


char input[80] = "55 cars";
char output[80] = "";
int total_cars = 0;

sscanf(input, "%d", &total_cars);
sprintf(output, "There are %d cars", total_cars);
printf("%s", output); // There are 55 cars
```

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
```



## Other

### Format Placeholders
```c 
%5.3f: print float value in space 5 chars wide, with 3 places beyond decimal
%20s:  print the string value in a field of 20 chars wide, right justified
%-20s: print the string value in a field of 20 chars wide, left justified
%8d:   print the int value in a field of 8 chars wide, right justified
%-8d:  print the int value in a field of 8 chars wide, left justified

%x:     print value in hexadecimal (base 16)
%o:     print value in octal (base 8)
%d:     print value in signed decimal  (base 10)
%u:     print value in unsigned decimal (unsigned base 10)
%e:     print float or double in scientific notation
```


### Resources: - [C Programming Language (2.6 - 2.9.3)](https://diveintosystems.org/book/C2-C_depth/strings.html)
