/*
 
 This program provides an example that 
 arrays are passed BY REFERENCE, not by value
 i.e., the callee function can modify the caller’s 
 array values. Therefore, if you update values in 
 an array passed to a function, you are updating 
 the caller’s array.
 
 */
#include <stdio.h>


void f (int a[10]);


int main()
{
   int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
   
   f(a);
   f(a);

   printf("%d\n", a[3]);

   return 0;
}


void f (int a[10])
{
   printf("%d\n", a[3]);
   a[3] += 900;
}
