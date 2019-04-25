/*Gregorian calender, what is the day of 1st Jan to given input year*/
/*25-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, a, lastYear, day;

    printf("Enter the year: ");
    scanf("%d", &year);

    //go last year to given input
    a = year - 1;

    //formula of evaluate Gregorian last year
    lastYear = (a / 4) - (a / 100) + (a / 400);
        /*
        lastYear = (2011 / 4) - (2011 / 100) + (2011 / 400);
        lastYear = (502) - (20) + (5);
        usually the associativity of + is higher than - but now tie between both operands
        then is expression will be execute left to right first execute - operand then +
        */

    //find number of week in 7 days
    day = (a + lastYear) % 7;

    if(day == 0){
        printf("\nMonday");
    }else if(day == 1){
        printf("\nTuesday");

    }else if(day == 2){
        printf("\nWednesday");

    }else if(day == 3){
        printf("\nThursday");

    }else if(day == 4){
        printf("\nFriday");

    }else if(day == 5){
        printf("\nSaturday");

    }else if(day == 6){
        printf("\nSunday");

    }else{
        printf("Error");
    }

    return 0;
}
