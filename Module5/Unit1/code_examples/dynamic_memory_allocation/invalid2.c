/*
 This program provides examples of invalid uses of pointers.
 
 There is attempt to assign the ptr a char literal 
 rather than assign the char literal to the char 
 pointed to. Seg faults on the first assignment.
*/
#include <stdio.h>

int main(void)
{
   char *ptr;

   ptr = 'A';
   *ptr = 'B';

   printf("%p %hd\n", ptr, *ptr);

   return 0;

}
