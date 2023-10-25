/*
 This program demonstrates the use of a pointer 
 to sum the contents of an array of integers. 
 
 This program is similar to array_summation.c; 
 however, in this version pointers are used in 
 a normal way, i.e., without using subscripting.
 */
#include <stdio.h>

int main() 
{
   int *ap, nums[3] = {10, 20, 30};

   int sum = 0;

   for (ap = nums; ap < (nums+3); ap++)
      sum += *ap;

   printf("Sum: %d\n", sum);

   return 0;
}
