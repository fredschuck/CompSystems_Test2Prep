/*
 
 array_bounds.c
 
 This program demonstrates common mistakes that occur 
 when accessing array elements outside of the array's
 bounds.
 
 */
#include <stdio.h>

int main()
{
   int a[3] = {1, 2, 3};
   int b[3] = {4, 5, 6};
   int c[3] = {7, 8, 9};

   int d = a[-1];

   printf("%d\n", d);

   printf("%d %d %d %d %d %d %d\n", a[-2], a[-1], a[0], a[1], a[2], a[3], a[4]);
   printf("%d %d %d %d %d %d %d\n", b[-2], b[-1], b[0], b[1], b[2], b[3], b[4]);
   printf("%d %d %d %d %d %d %d\n", c[-2], c[-1], c[0], c[1], c[2], c[3], c[4]);

   return 0;
}
