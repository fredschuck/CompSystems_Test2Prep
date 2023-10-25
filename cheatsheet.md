# Test 2 Review


## Module 03 - Unit 2: Functions and Arrays in C

## Module 03 - Unit 3: Structs, the Preprocessor and Debugging in C

## Module 04: Number Systems

## Module 05 - Unit 1: Program Memory, C Pointers and Arrays

## Module 05 - Unit 2: The String Library, Structs and I/O
### Strings and the String Library
```
char ch;               // A single character
ch = "abc[1]";         // Assigns the character 'b' to ch
```
- Arrays of char 
```
char str[10];           // Array of 10 characters
strcpy(str, "Hello");   // Copy "Hello" into str
```
- Dynamically Allocating Strings
```
```
- <ctype.h> Library Functions
```
isalpha(ch);           // Returns true if ch is a letter
isdigit(ch);           // Returns true if ch is a digit
isalnum(ch);           // Returns true if ch is a letter or digit
isspace(ch);           // Returns true if ch is a whitespace character
isupper(ch);           // Returns true if ch is an uppercase letter
islower(ch);           // Returns true if ch is a lowercase letter
toupper(ch);           // Returns ch converted to uppercase
tolower(ch);           // Returns ch converted to lowercase
```
- String Library Functions
```
strlen(str);            // Returns the length of str
strcpy(str1, str2);     // Copies str2 into str1
strncpy(str1, str2, n); // Copies n characters of str2 into str1
strcmp(str1, str2);     // Returns 0 if str1 and str2 are equal
srtncmp(str1, str2, n); // Returns 0 if the first n characters of str1 and str2 are equal
strcat(str1, str2);     // Concatenates str2 onto the end of str1
strstr(str1, str2);     // Returns a pointer to the first occurrence of str2 in str1   
strchr(str, ch);        // Returns a pointer to the first occurrence of the character ch in str
sprintf(str, "%d", n);  // Writes the string form of the integer n into str
```
- sscanf() and sprintf()
```
sscanf(str, "%d", &n);  // Reads the string str and stores the integer value into n
sprintf(str, "%d", n);  // Outputs the string form of the integer n into str
```
- String Literals
```
char str[10] = "Hello"; // str is initialized to "Hello"
char str[10] = {'H', 'e', 'l', 'l', 'o', '\0'}; // str is initialized to "Hello"
```
- <stdlib.h> Library Functions
```
atoi(str);              // Converts the string str to an integer
atof(str);              // Converts the string str to a double
```

### Structs

### Input and Output

### Constants, Switch, Enum, and typedef

### Command Line Arguments

### The void* Type
-  void * represents a pointer to any type, or a pointer to an unspecified type.