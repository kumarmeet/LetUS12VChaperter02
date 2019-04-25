/*Determine whether a point lies inside the circle on the circle or outside the circle*/
/*25-04-2019*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y, radius, d;

    printf("Enter the circle co-rodinates (x, y): ");
    scanf("%f %f", &x, &y);

    printf("Enter the circle radius: ");
    scanf("%f", &radius);

    if(radius  > sqrt( pow (x, 2)  +  pow(y, 2)))   {
        printf("\n\nThe pints lie inside the circle.");

    }
    else if(radius ==  sqrt(pow (x, 2)  +  pow (y, 2)))   {
        printf("\n\nThe points lie on the circle.");
    }
    else   {
        printf("\n\nThe points lie outside the circle.");
    }

    return 0;
}
