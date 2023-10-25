/*
 
 This program demonstrates the difference between 
 printing the value stored in a pointer (an address) 
 and printing the value pointed-to by the pointer 
 (the value stored at the address).
 
 */
#include <stdio.h>

int main()
{
   int a = 35;
   int *ap;
   ap = &a;
 
   printf(" a=%d\n &a=%u\n ap=%u\n *ap=%d\n", a, (unsigned int) &a, (unsigned int) ap, *ap);
   
   printf("\n");
   
   printf(" a=%d\n &a=%p\n ap=%p\n *ap=%d\n", a, &a, ap, *ap);

   return 0;
}
