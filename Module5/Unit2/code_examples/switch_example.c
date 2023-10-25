/*
 This program demonstrates the use of 
 the switch statement.
*/
#include <stdio.h>

int main()
{
    int grade = 0;

    printf("Enter grade: ");
    scanf("%d", &grade);

    switch(grade)
    {
        case 4:
        case 3:
            printf("Pass\n");
            break;
        case 2:
        case 1:
        case 0:
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

   
   return 0;
}
