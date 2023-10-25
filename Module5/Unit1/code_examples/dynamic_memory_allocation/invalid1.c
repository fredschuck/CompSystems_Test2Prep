/*
 This program provides examples of invalid uses of pointers.
 
 For scanf, the problem is that we’re passing in the value 
 of i as the address, not the address of i.  Will seg fault 
 for most numeric input entered.

 */
#include <stdio.h>

int main( void) 
{
   int i, j, result;

   printf("Enter two numbers: ");
   
   result = scanf("%d %d", i, &j);
   
   if (result != 2) {
      printf("Result: %d\n", result);
   }

   printf("%d %d %p\n", i, j, &i);

   return 0;

}
