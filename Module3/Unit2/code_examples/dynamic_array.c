// Example of using Dynamic Size Arrays with functions

#include <stdio.h>

void get_data(int total_days, int temperatures[total_days]);


int main(void)
{
   int i;
   int total_temps = 0;

   
   printf("How many temperature readings are you reporting? ");
   scanf("%d", &total_temps);
   
   int temperatures[total_temps];
   
   
   get_data(total_temps, temperatures);
   
   
   printf("You entered: \n");
   
   for (i = 0; i < total_temps; i++)
   {
      printf("%d ", temperatures[i]);
   }
   
   
   return 0;
}



void get_data(int total_days, int temperatures[total_days])
{
   int i;
   
   for (i = 0; i < total_days; i++)
   {
      printf("Enter temperature: ");
      scanf("%d", &temperatures[i]);
   }
}
