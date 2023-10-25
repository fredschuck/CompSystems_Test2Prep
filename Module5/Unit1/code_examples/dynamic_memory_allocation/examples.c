/*
 This program shows the difference between 
 using malloc() and using calloc() to allocate 
 memory dynamically.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
   char * name;
   char class;
   int idnum;
};


void calloc_example();
void malloc_example();
void print_student(struct student *);


int main()
{
   calloc_example();
   malloc_example();

   return 0;
}


void calloc_example()
{
   printf("Calloc Output------------------------------\n");

   struct student *students;
   students = (struct student *) calloc(10, sizeof(struct student));
   
   if (students == NULL) {
      printf("Error\n");
      exit(1);
   }
   
   //Print first student
   print_student(students);

   int *ip;
   ip = (int *) calloc (1, sizeof(int));
   if (ip == NULL) {
      printf("Error\n");
      exit(1);
   }
   printf("Num: %d\n", *ip);

   char *cp;
   cp = (char *) calloc (1000, sizeof(char));
   if (cp == NULL) {
      printf("Error\n");
      exit(1);
   }
   
   //15 chars starting at char 15
   char *p = cp;
   for (; p < cp + 15; p++) 
      printf("%c", *p);
   
   printf("\n");

   free(students);
   free(ip);
   free(cp);

}


void malloc_example()
{
   printf("\nMalloc Output------------------------------\n");

   struct student *students;
   students = (struct student *) malloc(10 * sizeof(struct student));
   
   if (students == NULL) {
      printf("Error\n");
      exit(1);
   }
   
   
   struct student *sp = students;
   
   while (sp < students+9)
   {
      sp->name = NULL;
      sp->class = ' ';
      sp->idnum = 0;
      
      sp++;
   }
   
   //Print first student
   print_student(students);
   
   //Print last student
   print_student(students + 9);

   int *ip;
   ip = (int *) malloc (sizeof(int));
   if (ip == NULL) {
      printf("Error\n");
      exit(1);
   }
   printf("Num: %d\n", *ip);

   char *cp;
   cp = (char *) malloc (15 * sizeof(char));
   if (cp == NULL) {
      printf("Error\n");
      exit(1);
   }
   
   //15 chars starting at char 15
   char *p = cp;
   for (; p < cp + 15; p++) 
      printf("%c", *p);
   
   printf("\n");

   free(students);
   free(ip);
   free(cp);
}

void print_student(struct student *s)
{
   printf("Name: %s\nClass: %c\nID: %d\n", s->name, s->class, s->idnum);
}
