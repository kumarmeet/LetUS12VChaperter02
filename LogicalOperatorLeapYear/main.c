/*Leap year or not use the logical operator*/
/*26-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if((year % 4 == 0) || (year % 400 == 0) && (year % 100 != 0)){
        printf("%d is a leap year", year);
    }else{
        printf("%d is not a leap year", year);
    }

    return 0;
}
