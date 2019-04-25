/*Obtained revere number and check number is equal or not*/
/*25-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, temp, reminder, reverse = 0;

    printf("Enter only five digit number: ");
    scanf("%d", &number);

    //hold the number variable value in temp
    temp = number;

    reminder = number % 10; // reminder -> 12221 % 10 = 1;
    number = number / 10;   // number -> 1221 / 10 = 1222;
    reverse = (reverse + reminder) * 10; // reverse -> (0 + 1) * 10 = 10;

    reminder = number % 10; // reminder -> 1222 % 10 = 2;
    number = number / 10;   // number -> 1222 / 10 = 122;
    reverse = (reverse + reminder) * 10; // reverse -> (10 + 2) * 10 = 120;

    reminder = number % 10; // reminder -> 122 % 10 = 2;
    number = number / 10;   // number -> 122 / 10 = 12;
    reverse = (reverse + reminder) * 10; // reverse -> (120 + 2) * 10 = 1220;

    reminder = number % 10; // reminder -> 12 % 10 = 2;
    number = number / 10;   // number -> 12 / 10 = 1;
    reverse = (reverse + reminder) * 10; // reverse -> (1220 + 2) * 10 = 12220;

    reminder = number % 10; // reminder -> 1 % 10 = 1;
    number = number / 10;   // number -> 1 / 10 = 0;
    reverse = (reverse + reminder) * 1; // reverse -> (12220 + 1) * 1 = 12221;

    printf("%d reverse of this number %d\n", temp, reverse);

    if(temp == reverse){
        printf("%d reverse order is %d is same",temp, reverse);
    }else{
        printf("%d reverse order is %d is not same",temp, reverse);
    }

    return 0;
}
