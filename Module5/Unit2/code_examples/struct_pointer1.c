/*
 This program demonstrates the use of pointers to structs. 
 
 Note that in this case parentheses are needed. We want 
 to get the value pointed to (the struct) and then the
 member’s value. If parentheses are not used, a 
 compilation error would occur.
 */
#include <stdio.h>

struct person {
   char *name; 
   int height;
};

int main(void)
{

   struct person person1;
   struct person *p = &person1;

   (*p).name = "Donna";
   (*p).height = 65;
   printf("Name is %s\n", (*p).name);
   char initial = *(*p).name;
   printf("Initial is %c\n", initial);
   printf("Height is %d\n", (*p).height);

   return 0;
}

