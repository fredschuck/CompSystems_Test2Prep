/*
 This program shows an example of a function 
 calling itself in a recursive manner. 
 
 This program calculates a fibonacci number.
 Note that this version only works well 
 for small numbers.
 
 */

#include <stdio.h>

long long int f (long long int n);

int main(void)
{
   printf("f(n) = %lld\n", f(5));

   return 0;
}


long long int f (long long int n) 
{
   if ((n == 1) || (n == 0))
      return 1;
   else
      return (f(n-1) + f(n-2));

}
