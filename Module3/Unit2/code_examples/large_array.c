/*
 This program uses a static global variable 
 to store a very large array.
 */
#include <stdio.h>

double big_array[10000000];

int main(void)
{
   int i;
    
   for (i = 0; i < 10000000; i++) {
      big_array[i] = i;
   }
   
   printf("i=%d\n", i);

   return 0;
}
