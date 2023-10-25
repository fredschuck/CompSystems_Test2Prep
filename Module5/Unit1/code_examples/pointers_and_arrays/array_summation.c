/*
 This program demonstrates the use of a pointer 
 to sum the contents of an array of integers.
 */
#include <stdio.h>

int main() 
{
   int *ap, nums[3] = {10, 20, 30};

   int sum = 0;

   for (ap = &(nums[0]); ap < &(nums[3]); ap++)
      sum += *ap;

   printf("Sum: %d\n", sum);

   return 0;
}
