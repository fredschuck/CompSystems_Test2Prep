/*
 
 var_array.c
 
 This program shows the use of arrays variable-length arrays.
 
 */

#include <stdio.h>

int main(void)
{
   int months;

   (void) printf("Enter # of months in year: ");
   (void) scanf("%d", &months);

   int month_array[months];

   int upper_idx = (sizeof(month_array) / sizeof(month_array[0]));

   printf("Upper Idx: %d\n", upper_idx);

    
   int i = 0;
    
   for (i = 0; i < upper_idx; i++) {
      printf("Idx: %d\n", i);
      month_array[i] = i+1;
   }   

   (void) printf("%d\n", month_array[0]);

   return 0;
}
