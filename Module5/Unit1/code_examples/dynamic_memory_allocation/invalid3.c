/*
 This program provides examples of invalid uses of pointers.
 
 Use a pointer to an area of memory previously freed
 or deallocated

 */
#include <stdio.h>
#include <stdlib.h>

int * f()
{
   int val = 7;
   return &val;
}

void g() 
{
   int a, b, c;
   a = 14;
   b = 27;
   c = 38;
}

int main()
{
   int *v = f();
   printf("%d\n", *v);  //Works b/c nothing else has overwritten

   g();
   printf("%d\n", *v);
   
   return 0;
}
