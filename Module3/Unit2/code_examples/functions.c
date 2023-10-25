/************************************
 * Program demonstrating flow of 
 * control in a program using 
 * functions
 ***********************************/

#include <stdio.h>

//Function prototypes
int function_a(int);
int function_b(int);
int function_c(int);

/************************************
 * Main function starts the program
 ***********************************/
int main()
{
   int v = 0;
   
   //v =
   function_a(v);
   printf("Current Value: %d\n", v);

   //v =
   function_b(v);
   printf("Current Value: %d\n", v);

   //v =
   function_c(v);
   printf("Current Value: %d\n", v);

   return 0;
}

/**********************************
 * Adds 1 to the value and returns.
 * Also, prints "Function A"
 *********************************/
int function_a(int value) 
{
   printf("Function A\n");
   return value + 1;
}

/**********************************
 * Adds 3 to the value and returns.
 * Also, prints "Function B" and calls
 * function C.
 *********************************/
int function_b(int value) 
{
   printf("Function B\n");
   value = function_c(value);
   return value + 3;
}

/**********************************
 * Removes 1 from the value and returns.
 * Also, prints "Function C"
 *********************************/
int function_c(int value) 
{
   printf("Function C\n");
   return value - 1;
}
