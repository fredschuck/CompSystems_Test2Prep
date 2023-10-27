/*      INSTRUCTIONS BELOW       */

#include <stdio.h>
#include <stdlib.h>

float parse_data(char string[]);
void pretty_print(char item[], int total, float cost);

int main(int argc, char* argv[]){
    char* file = argv[1];
    FILE *output;
    int quantity = 0;
    float totalCost = 0.00;
    int totalItems = 0;
    char line[120];

    output = fopen(file, "r");
    if (output == NULL){
        printf("Unable to open the input file.\n");
        return(-1);
    }

    while (fgets(line, sizeof(line), output) != NULL){
        totalItems++;
        totalCost += parse_data(line);
    }

    fclose(output);
    
    printf("\n-------------------------------------------------------------------------\n");
    printf("Total Items: %d\t\tTotal Cost: $%.2f\n", totalItems, totalCost);
    return 0;
}

float parse_data(char string[]){
    char item[20];
    int quantity = 0;
    float cost = 0.00;
    sscanf(string, "%s %d %f", item, &quantity, &cost);
    pretty_print(item, quantity, cost);
    return quantity * cost;

}

void pretty_print(char item[], int total, float cost){
    printf("Item: %s\tQuantity: %d\tItem Cost: $ %.2f\tSubtotal: $ %.2f\n", item, total, cost, (total * cost));
}

/* Program 1: Restaurant Supplies (100 points)
   Write a program that does the following:
   
   1. Reads the file name of a text file that contains a list of supplies
      purchased by a restaurant.
      a. The file name is provided in the command-line arguments.
         For example:
         ./a.out customer_data.txt
      b. You cannot hard-code the file name in the submitted version of
         your code; however, you may use an initialized string during
         testing.
      c. See Canvas for a sample file.

   2. If the file does not exist or cannot be opened for any reason, the program
      needs to print the following message:
      Unable to open the input file.

   3. The file contains a list of purchases, one on each line. The data includes
      the name of the item, the quantity purchased and the cost per unit. For
      example:
      Cream 12 1.39
      Sorbet 17 5.40
      Cookies 40 3.89

   4. The program reads the entire contents of the file, one item at a time,
      until the end of the file is reached.

   5. As the program reads a new line of data, it prints the item’s information.
      a. The output also needs to include a subtotal (see sample below).
      b. The output needs to be formatted just as shown in the sample run
         below.

   6. Once all the data is read, the program displays the total number of items
      purchased and the total cost. The output needs to be formatted just as
      shown in the sample run below.

   7. When the program is done processing the file, it closes it appropriately.
*/
