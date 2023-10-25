/*
 
 This program demonstrates the use of pointers to pointers, 
 i.e., pointer variables that store the address of variables
 that are themselves pointers.
 
 */
#include <stdio.h>

int main (void)
{
   char a = 'a', b = 'b', c = 'c';

   printf("Values\n");
   printf("a=%c b=%c c=%c\n", a, b, c);

   char *ap = &a;
   char **app = &ap;
   char ***appp = &app;

   printf("ap=%p app=%p appp=%p\n\n", ap, app, appp);

   printf("Addresses\n");
   printf("&a=%p &b=%p &c=%p\n", &a, &b, &c);
   printf("&ap=%p &app=%p &appp%p\n\n", &ap, &app, &appp);

   ***appp = b + c;
   printf("Updated Values:\n");
   printf("a=%c (dec %d) b=%c c=%c\n",
          a, a, b, c);

   return 0;
}
