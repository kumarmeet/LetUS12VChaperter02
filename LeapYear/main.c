/*Check whether leap year or not*/
/*25-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("Enter a Year: ");
    scanf("%d", &year);

    (year % 4 == 0) ? printf("%d is a leap year",year) : printf("%d is not a leap year", year);

    //or

 /*   if(year % 4 == 0){
        printf("%d is a leap year",year);
    }else{
        printf("%d is not a leap year", year);
    }*/

    return 0;
}
