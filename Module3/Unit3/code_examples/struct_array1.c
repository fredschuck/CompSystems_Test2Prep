/*
 This program demonstrates the use of arrays of struct elements. 
 
 Note that with arrays you must cast the explicit creation of the
 struct to the struct type for it to work (compile example with 
 line not commented out). The initialization only works without
 the cast when declaring the struct!
 */
#include <stdio.h>

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
   struct person p2 = {"Fred", 72, 180, 'M', 12345, 20};
   struct person p3 = {"Fred", 72, 180, 'M'};
   struct person p4 = {.name = "Fred", .height = 72, .gender = 'M', .idnum = 12345};

   struct person persons[5];
   
   //this won't work - compiler error
   //persons[0] = {"Fred", 72};

   //this will
   persons[0] = (struct person) {"Fred", 72};
   print_person(persons[0]);

   persons[0] = p0;
   persons[1] = p1;
   persons[2] = p2;
   persons[3] = p3;
   persons[4] = p4;

   for (int i = 0; i < 5; i++) {
      print_person(persons[i]);
   }   

   persons[2].idnum = 23456;
   print_person(persons[2]);

   return 0;
}


void print_person(struct person p)
{
   printf("Person: %s\n  Height: %d\n  Weight: %d\n  Gender: %c\n  ID: %d\n  Age: %hd\n", p.name, p.height, p.weight, p.gender, p.idnum, p.age);
}
