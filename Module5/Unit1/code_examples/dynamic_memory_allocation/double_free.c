/*
 This program provides examples of invalid uses of pointers.
 
 The code show an attempt to free memory
 that has already been de-allocated.
 */
#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int *ip;
   
   ip = (int *) calloc(1000, sizeof(int));

   free(ip);
   free(ip);

   return 0;
}
