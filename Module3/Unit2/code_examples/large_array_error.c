/*
 This program attempts to use a local variable
 to store a very large array.
 
 This program is incorrect and will fail when
 executed.
 */
#include <stdio.h>


int main(void)
{
   /*
    NOTE: 
    Add the keyword static before double
    to correct the error.
    */
   double big_array[10000000];

   int i;
    
   for (i = 0; i < 10000000; i++) {
      big_array[i] = i;
   }
   
   printf("i=%d\n", i);

   return 0;
}
