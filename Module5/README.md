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
> [Class Exercises](Unit2/class_exercises/) | [Code Examples](Unit2/code_examples/) | [Slides](Unit2/slides/)

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
| `atoi(str);`     | Converts the string `str` to an integer, ignoring leading white space |
| `atof(str);`     | Converts the string `str` to a double, ignoring leading white space   |


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
[Review THIS code!](Unit2/class_exercises/lab_customerData.c)
- **Buffer** is the area of memory used to reduce number of expensive system calls 
- **Stream** is the source of input or destination of output
- Every program begins execution with three streams open (they open and close automatically):
  - `stdin` - standard input stream
  - `stdout` - standard output stream
  - `stderr` - standard error stream

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

### fopen()
`FILE * fopen(const char *filename, const char
*mode)`
- `fopen()` opens a file and returns a pointer to a `FILE` structure.
```c
FILE * infile;
infile = fopen(“/tmp/testfile.txt”, “r”);
if (infile == NULL){ 
    (void) printf(“Error.\n”); 
    return -1;
}
```
| Mode | Meaning                                       |
|------|-----------------------------------------------|
| "r"  | Open for reading.                            |
| "w"  | Create file for writing (discard previous contents). |
| "a"  | Append to an existing file or create it for writing.  |
| "b"  | Used with any of the above modes to indicate binary mode (e.g., "rb", "wb"). |
| "r+" | Open for reading and writing.                 |

### fclose()
```c
int fclose(FILE * stream)
/*--------------------------*/
(void) fclose(outfile);
```
- `fclose()` closes a file.
- Flushes any unwritten data to output file or device
- Closes the stream (cannot be read or written after)
```c

### fgetc() and getc()
```c
int fgetc(FILE *stream)
int getc(FILE *stream)
/*--------------------------*/
int res;
unsigned char c;
if ((res = getc(stdin)) == EOF)
…take action here…
c = (unsigned char) res;
```
- Read next character of stream as `unsigned char` (converted to `int`)
- Return `EOF` on end of file or error
- `getchar()` is equivalent to `getc(stdin)`
```c
int ch;
while ((ch = fgetc(infile)) != EOF) {
    putchar(ch);
}
```
### fputc() and putc()
```c
int fputc(int c, FILE *stream)
int putc(int c, FILE * stream)
/*--------------------------*/
(void) putc(‘H’, stdout);
(void) putc(‘I’, stdout);
(void) putc(‘!’, stdout);
```
- Write the character `c` (converted to `unsigned char`) to `stream`
- Returns character written, or `EOF` on error
- `putchar(c)` equivalent to `putc(c, stdout)`

### ungetc()
```c
int ungetc(int c, FILE * stream)
/*--------------------------*/
int ch;
while ((ch = fgetc(infile)) != EOF) {
    if (ch == ‘#’) {
        (void) ungetc(‘#’, infile);
        break;
    }
    putchar(ch);
}
```
- Pushes `c` (converted to `unsigned char`) back onto `stream`!
    - Clears the stream’s end-of-file indicator.
    - c will be read by next `getc` on `stream`.
- **_Only one_** character of pushback per stream is guaranteed.
- `EOF` may not be pushed back.
- Returns character pushed back, `EOF` on error.

### fread() and fwrite()
```c
size_t fread (void * ptr, size_t size,
size_t nobj, FILE * stream)
/*--------------------------*/
char items[NUMITEMS];
size_t nr = fread((void *) items, sizeof(char),
(size_t) NUMITEMS, stdin);
if (nr != NUMITEMS)
    // … do something here …
```
- Reads up to `nobj` objects of size `size` from `stream` into array pointed to by `ptr`.
- Returns number of objects read, less if error.
```c
size_t fwrite (const void * ptr, size_t size,
size_t nobj, FILE * stream)
```
- Writes up to `nobj` objects of size `size` starting at address `ptr` to `stream`.
- Returns number of objects written, less than requested if error.

### fseek() and ftell()
```c
int fseek (FILE *stream, long offset,
int origin)
/*--------------------------*/
int res = fseek(infile, (long) 1000, SEEK_SET);
c = getc(infile); /* now read 1001st byte */
int res = fseek(infile, (long) -5, SEEK_END);
c = getc(infile); /* read 5th byte from end */
```
- Sets file position (for subsequent reading or writing) to `offset` from `origin`.
- `origin` may be `SEEK_SET` (beginning of file), `SEEK_CUR` (current position), or `SEEK_END` (end of file).
- Mainly for binary streams.
- Returns non-zero on error.

### fflush()
```c
int fflush(FILE *stream)
/*--------------------------*/
int res = fflush(stdout);
```
- Causes any buffered data to be immediately written to output file.
- Helpful if you don’t want to wait for `‘\n’` to see output. `fflush(stdout);`
- Or if you want to discard all the input typed by the user so far. `fflush(stdin);`

### fremove()
```c
int remove(const char *filename)
/*--------------------------*/
if (remove(“/tmp/testfile.txt”))
    // …error, take action here…
```
- Delete the named file, return 0 if successful

### fgets()
```c
char * fgets(char * s, int n, FILE *stream)
/*--------------------------*/
char line[80];
if (fgets(line, 80, stdin) == NULL)
    // …error, take action here…
```
- Reads at most `n-1` characters from `stream` into `s`, stopping if newline is encountered.

### fputs()
```c
int fputs(const char * s, FILE *stream)
/*--------------------------*/
if (fputs(“Hello”, stdout) == EOF)
    // …error, take action here…
```
- Writes string `s` to `stream`, stopping at null character.

### fscanf() and sscanf()
```c
int fscanf(FILE *stream, const char *fmt, …) // Like scanf, but specify stream to be read from
int sscanf(char * s, const char *fmt, …)    // Like scanf, but scans from a string instead of a file
```

### fprintf() and sprintf()
```c
int fprintf(FILE *stream, const char *fmt, …) // Like printf, but specify stream to be written to
int sprintf(char * s, FILE *stream, const char *fmt, …) // Like printf, but prints to a string instead of a file
```

### Error Functions
```c
int feof(FILE *stream) // Returns non-zero if EOF for stream has been reached
int ferror(FILE *stream) // Returns non-zero if error indicator for stream is set
void clearerr(FILE *stream) // Clears previously set error indicator for stream
```
- Errors are not cleared unless programmer explicitly uses `clearerr`

## Other

### Format Placeholders
```
%5.3f   print float value in space 5 chars wide, with 3 places beyond decimal
%20s    print the string value in a field of 20 chars wide, right justified
%-20s   print the string value in a field of 20 chars wide, left justified
%8d     print the int value in a field of 8 chars wide, right justified
%-8d    print the int value in a field of 8 chars wide, left justified

%x      print value in hexadecimal (base 16)
%o      print value in octal (base 8)
%d      print value in signed decimal  (base 10)
%u      print value in unsigned decimal (unsigned base 10)
%e      print float or double in scientific notation
%p      print pointer value, address, in hexadecimal

%ld     placeholder for a long value
%lu     placeholder for an unsigned long value
%lld    placeholder for a long long value
%llu    placeholder for an unsigned long long value
```

### Switch Statments
```c
switch (expression) {
    case constant1:
        statement(s);
        break; // Removing break will cause fall through to the next case.
    case constant2:
        statement(s);
        break;
    case 3: case 4: case 5: // Can have multiple cases for one statement
        statement(s);
        break;
    default:
        statement(s);
}
```
- Removing break statements will cause the switch statement to fall through to the next case.
- Often faster than if statements.

### Enums
```c
num colors {red, blue, green, white, black};
enum colors mycolor;
mycolor = blue;
if ((mycolor == blue) || (mycolor == green))
    printf("cool color\n"); 
```
- Used for variables with a small set of possible values, where actual encoding of value is unimportant. This is better than using a bunch of macros.
- Do not compare variables of different enum types.

### typedef
```c
typedef struct {
    int val;
    cptr name;
    struct mystruct *next;
} llnode;
llnode entries[100];
```
- Assigns an alternate name (synonym) to a C data type.
- Makes code more readable and easier to maintain.
- Usually, `typedef`s are collected in a header file thatis `#include`’d in all source code modules

### Command Line Arguments
```c
int main(int argc, char *argv[]) {}
```
- `argc`: argument count.
    - Includes the program itself.
- `argv`: argument vector.
    - Array of pointers to command line arguments stored as strings.
    - `argv[0]`: name of program.
    - `argv[1]` to `argv[argc-1]`: otehr arguments.
    - `argv[argc]`: null pointer.
- Using arrays
```c
for (int i = 1; i < argc; i++)
printf(“%s\n”, argv[i]);
```
- Using pointers
```c
for (char **p = &argv[1]; *p != NULL; p++)
printf(“%s\n”, *p);
```
### Resources: - [C Programming Language (2.6 - 2.9.3)](https://diveintosystems.org/book/C2-C_depth/strings.html)
