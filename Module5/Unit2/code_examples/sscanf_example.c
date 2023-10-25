/*
 
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
   char input[80] = "";
   
   printf("Please enter two floating point numbers, separated by a comma (on the same line):\n");
   scanf("%s", input);
   
   printf("You entered: %s\n", input);
   
   float num1, num2;
   char skip;
   
   sscanf(input, "%f%c%f", &num1, &skip, &num2);
   
   printf("Sum: %f\n", num1+num2);
   
   return 0;
}

//{
//   char input[80] = "55 cars";
//   char output[80] = "";
//   int total_cars = 0;
//   
//   sscanf(input, "%d", &total_cars);
//   
//   sprintf(output, "Total Cars: %d\n", total_cars);
//   printf(output);
//}
