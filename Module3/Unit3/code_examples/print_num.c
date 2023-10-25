/*
 This program shows how to write a macro 
 that can be used to simplify the output 
 of debug messages in a program.
 */
#include <stdio.h>

#define PRINT_VAL(x) printf("[DEBUG] " #x " = %d\n", x)

int main()
{
   int num = 8;

   PRINT_VAL(num);

   return 0;
}
