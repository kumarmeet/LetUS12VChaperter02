/*Check whether triangle is valid or not*/
/*25-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angle1, angle2, angle3, sumOfTriangle;

    printf("Enter the triangle values\n");

    printf("Enter angle 1 value: ");
    scanf("%d", &angle1);

    printf("Enter angle 2 value: ");
    scanf("%d", &angle2);

    printf("Enter angle 3 value: ");
    scanf("%d", &angle3);

    sumOfTriangle = angle1 + angle2 + angle3;

    printf("The triangle all angle sum is =  %d degree\n",sumOfTriangle);

    if(sumOfTriangle == 180){
        printf("Triangle is valid");
    }else{
        printf("Triangle is not valid");
    }

    return 0;
}
