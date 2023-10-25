/*
 This program demonstrates that an auto variable has 
 no scope outside of the function where it is declared. 
 
 Compile and run this program, the look at the output 
 and consider the results. Then add static to the line 
 int sum = 0 in the sumit function. Recompile, run and 
 look at the results. You should notice a difference. 
 Consider the reason for the different output.
 */
#include <stdio.h>

int * sumit (int i);

int main()
{
   printf("%d\n", *sumit(3));
   printf("%d\n", *sumit(4));
   printf("%d\n", *sumit(5));

   return 0;
}

int * sumit(int i)
{
   // TODO: make sum a static variable and recompile
   int sum = 0;
   sum += i;
   return &sum;
}
