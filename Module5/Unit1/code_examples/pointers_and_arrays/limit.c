/*
 This program shows that like with array bounds, 
 in C there are no limitations on what a 
 pointer can address. 
 
 Compile this code with no warnings and note 
 that it (most of the time) ends in a 
 segmentation fault.
 */
#include <stdio.h>

int main(void) 
{
   int *p = (int *) 0x31415926;
   printf("*p1 = %d\n", *p);

   return 0;
}
