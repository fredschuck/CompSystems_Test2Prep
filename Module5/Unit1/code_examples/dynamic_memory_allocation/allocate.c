/*
 This program provides examples of invalid uses of pointers.
 
 The code show an attempt to free memory
 that was NOT dynamically allocated.
 */
#include <stdio.h>
#include <stdlib.h>

int my_array[600];

int main(void) 
{

   int *p = my_array;
   free(p);
  
   exit(0);
}

   
