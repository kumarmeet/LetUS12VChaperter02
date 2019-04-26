/*Library charges a fine for every book returned late*/
/*26-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberOfDays;

    printf("Enter how many days you late for returned the book: ");
    scanf("%d", &numberOfDays);

   if(numberOfDays <= 0){
        printf("Invalid number of days");

   }else {

    if(numberOfDays <= 5){
        printf("Your late returned book charge is Rs.0.50/-");

    }else if(numberOfDays > 5 && numberOfDays <= 10){
        printf("Your late returned book charge is Rs.1.00/-");

    }else if(numberOfDays > 10 && numberOfDays <= 30){
        printf("Your late returned book charge is Rs.5.00/-");

    }else if(numberOfDays > 30 ){
        printf("Your membership is cancelled");

    }else{
        printf("Please enter number of days!");
    }

   }

    return 0;
}
