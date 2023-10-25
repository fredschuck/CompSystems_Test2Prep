/*
 This program demonstrates the use the -> operator 
 to access members of a struct, using a pointer 
 to the struct. This operator is more convenient 
 because it does not require the use of parentheses.
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

   p->name = "Donna";
   p->height = 65;
   printf("Name is %s\n", p->name);
   char initial = *p->name;
   printf("Initial is %c\n", initial);
   printf("Height is %d\n", p->height);

   return 0;
}

