/*Sum of two sides is greater than the largest of the three sides*/
/*26-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float x, y, z, check;

    printf("Enter x axis of triangle: ");
    scanf("%f", &x);

    printf("Enter y axis of triangle: ");
    scanf("%f", &y);

    printf("Enter z axis of triangle: ");
    scanf("%f", &z);

    if((x + y) > z){

        if((y + z) > x){

            if((x + z) > y){

                check = 1;
            }
    }
}

if(check == 1){
    printf("The triangle is valid");

}else{
    printf("The triangle is not valid");

}



    return 0;
}
