//
//  commute.c
//
//  This program demonstrates an alternate, although very uncommon,
//  and NOT recommended way to access array elements.
//
//  Created by Julio Bahamon
//
//

#include <stdio.h>

int main()
{
    int days_in_month[3];
    
    days_in_month[0] = 30;
    days_in_month[1] = 28;
    days_in_month[3] = 31;
    
    printf("The first value is: %d\n", days_in_month[0]);
    printf("The second value is: %d\n", days_in_month[1]);
    
    printf("\nNow commuting...\n");
    printf("The first value is: %d\n", 0[days_in_month]);
    printf("The second value is: %d\n", 1[days_in_month]);

    
    return 1;
}