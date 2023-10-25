/*
 This program provides examples of invalid uses of pointers.
 
 Use of a pointer to an area of memory 
 that has not been initialized.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *valptr;
   int sum = 0;
   int i;

   valptr = (int *) malloc (10 * sizeof(int));

   for (i = 0; i < 10; i++) {
      sum += *(valptr+i);
   }

   printf("Initial Sum: %d\n", sum);

   
   sum = 0;

   for (i = 0; i < 10; i++) {
      *(valptr+i) = 5;
      sum += *(valptr+i);
   }

   printf("Sum: %d\n", sum);

   return 0;
}


