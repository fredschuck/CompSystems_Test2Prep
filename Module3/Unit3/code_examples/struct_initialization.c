/*
 This program demonstrates how to declare and initialize a struct.
 
 Note that partial initialization will initialize all other
 elements to an appropriate 0 value.  If your struct is
 uninitialized and auto variable, anything could be in it. 
 If it is uninitialized and static variable, the compiler 
 uses an appropriate 0 value.
 */
#include <stdio.h>
#include <string.h>

#define LEN 50

struct person {
   char name[LEN];
   int height;
   int weight;
   char gender;
   int idnum;
   short age;
};

struct person p0;

void print_person(struct person p);

int main()
{
   struct person p1;
   struct person p2 = {"Joe", 72, 180, 'M', 12345, 20};
   struct person p3 = {"Fred", 72, 180, 'M'};
   struct person p4 = {.name = "Fred", .height = 72, .gender = 'M', .idnum = 12345};

   print_person(p0);
   print_person(p1);
   print_person(p2);
   print_person(p3);
   
   strcpy(p4.name, p2.name);
   p4.weight = 185;
   print_person(p4);

   return 0;
}

void print_person(struct person p)
{
   printf("Person: %s\n  Height: %d\n  Weight: %d\n  Gender: %c\n  ID: %d\n  Age: %hd\n", p.name, p.height, p.weight, p.gender, p.idnum, p.age);
}
