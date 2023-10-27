<div align="center">
  <h1>Module 5</h1>
  <br><br><br>
</div>      

# Unit 1: Program Memory, C Pointers and Arrays

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
- Other pointer operations:
```c
int *ptr1, *ptr2, x, y;
ptr2 = &x;
ptr1 = NULL;

*ptr2 = 10;    // access that value of what ptr2 is pointing to (x) and set it to 10
y = *ptr2 + 3; // y = 10
ptr1 = ptr2;   // ptr1 now is pointing to what ptr2 is pointing to
```


## Dynamic Memory Allocation

### Malloc
- Requires `<stdlib.h>`
- Once memory has been alocated, it must be freed with `free()` at the end of the program.
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
int *ptr = (int *) malloc(5 * sizeof(int));
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

### Resources: - [C Programming Language (2.1 - 2.5)](https://diveintosystems.org/book/C2-C_depth/scope_memory.html)


<div><br><br><br><br></div> <!-- spacer -->


# Unit 2: The String Library, Structs and I/O

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

### Resources: - [C Programming Language (2.6 - 2.9.3)](https://diveintosystems.org/book/C2-C_depth/strings.html)
