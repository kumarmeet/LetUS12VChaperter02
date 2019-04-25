/*Find whether the area of the rectangle is greater than its perimeter*/
/*25-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length, breadth, area, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);

    perimeter = 2 * (length + breadth);
    area = length * breadth;

    printf("Perimeter of rectangle is %d\n", perimeter);
    printf("Area of rectangle is %d\n", area);

    if(area > perimeter){
        printf("Area of rectangle is greater than perimeter of rectangle");
    }else{
        printf("Perimeter of rectangle is greater than area of rectangle");
    }

    return 0;
}
