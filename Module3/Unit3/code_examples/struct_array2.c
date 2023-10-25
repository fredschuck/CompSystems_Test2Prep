/*
 This program demonstrates how to reference arrays of structs. 
 
 Note that parentheses are NOT needed.
 */
#include <stdio.h>

#define LEN 50

struct phonenumber {
   short areacode;
   short exchange;
   short number;
   char type;
};

struct person {
   char name[LEN];
   int height;
   int weight;
   char gender;
   int idnum;
   short age;
   struct phonenumber pno[4];
};

struct person p0;

void print_person(struct person p);

int main()
{
   struct person p1;
   struct person p2 = {"Fred", 72, 180, 'M', 12345, 20, {{919, 515, 2044, 'W'}, {919, 555, 6789, 'H'}}};
   struct person p3 = {"Fred", 72, 180, 'M'};
   struct person p4 = {.name = "Fred", .height = 72, .gender = 'M', .idnum = 12345};

   struct person persons[5];
   
   //this won't work - compiler error
   persons[0] = {"Fred", 72};

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

   persons[4].pno[2].areacode = 919;
   print_person(persons[4]);

   return 0;
}

void print_person(struct person p)
{
   printf("Person: %s\n  Height: %d\n  Weight: %d\n  Gender: %c\n  ID: %d\n  Age: %hd\n", p.name, p.height, p.weight, p.gender, p.idnum, p.age);
   for (int i = 0; i < 4; i++) {
      printf("  Phone (%c): %d-%d-%d\n", p.pno[i].type, p.pno[i].areacode, p.pno[i].exchange, p.pno[i].number);
   }
}
