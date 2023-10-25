/*
 This program provides examples of dynamic memory allocation
 using structs and arrays.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 50

// Define a struct that holds the data for one record
struct person {
   char name[LEN];
   int height;
   int weight;
   char gender;
   int idnum;
   short age;
};


// Function prototype to display the data in one person struct
void print_person(struct person *p);


// Main program
int main(void) 
{
   // Declare a pointer to a struct person
   // Note that struct person is the type
   // and p1 is the identifier or variable name
   struct person *p1;
   
   // Call (or invoke) the malloc function to
   // dynamically allocate memory for one (1)
   // person struct. Note the use of a type cast
   // to convert the void pointer into a pointer to
   // struct person. Also note the use of struct person
   // as the argument to sizeof
   p1 = (struct person *) malloc(sizeof(struct person));
   
   // Print the value of the pointer, i.e., the memory
   // address where the struct is stored.
   printf("p1 = %p\n", p1);
   
   
   // The following lines (47-55) set values for
   // the individual fields stored in struct person.
   
   strcpy(p1->name, "Fred");
//   p1->name = "Fred";    // THIS CODE IS INCORRECT
   
   p1->height = 72;
   p1->weight = 167;
   p1->gender = 'M';
   p1->idnum = 12345;
  
   
   // Call the print_person function, with
   // the pointer to the struct person
   // as the artgument.
   print_person(p1);
   
   
   // Re-allocate the memory used to store p1.
   // We are preserving the existing memory contents
   // and adding space for nine (9) more records.
   //
   // Note that the result of this operation provides
   // the equivalent of a dynamically allocated array
   // of structs.
   p1 = (struct person *) realloc((void *) p1, sizeof(struct person)*10);
   
   // Copy the first element of the array into the 5th
   *(p1+4) = *p1;
   
   // Change the age of the first person
   p1->age = 19;
   
   // Change the name and age of the fifth person
   strcpy((p1+4)->name, "Jaime");
   (p1+4)->age = 25;
   
   // Print the value of the pointer, i.e., the memory
   // address where the first struct is stored.
   printf("p1 = %p\n", p1);
   
   print_person(p1);
   
   
   // Print the value of the pointer, i.e., the memory
   // address where the fifth struct is stored.
   printf("p1+4 = %p\n", p1+4);
   print_person(p1+4);
   
   
   // Release the memory
   free(p1);

   exit(0);
}


void print_person(struct person *p)
{
   printf("Person: %s\n  Height: %d\n  "
          "Weight: %d\n  Gender: %c\n  ID: %d\n  Age: %hd\n",
          p->name, p->height, p->weight,
          p->gender, p->idnum, p->age);
}


   
