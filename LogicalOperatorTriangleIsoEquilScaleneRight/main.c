/*Is triangle isosceles, equilateral or scalene*/
/*27-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,  y,  z,  isoscelesTriangle, equilateralTriangle, scaleneTriangle;

    printf("Enter triangle x coordinates: ");
    scanf("%d", &x);

    printf("Enter triangle y coordinates: ");
    scanf("%d", &y);

    printf("Enter triangle z coordinates: ");
    scanf("%d", &z);

    equilateralTriangle = ((x == y) && (y == z)); //all sides of triangles are same
    isoscelesTriangle = ((x == y) || (x== z) || (y == z)); // any two sides of triangles are same
    scaleneTriangle = ( x != y) && (x != z) && (y != z); // all sides of triangles are different

    if(equilateralTriangle){

        printf("This is eqilateral triangle");

    }else if( isoscelesTriangle){

        printf("This is  isosceles  triangle");

    }else if(scaleneTriangle){

        printf("This is scalene triangle");

    }else{

        printf("error");
    }


    return 0;
}
