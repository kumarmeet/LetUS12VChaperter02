/*Check grade of steel*/
/*26-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hardnessOfSteel, tensileOfSteel;
    float carbonContentOfSteel;

    printf("Enter hardness of steel: ");
    scanf("%d", &hardnessOfSteel);

    printf("Enter carbon content of steel: ");
    scanf("%f", &carbonContentOfSteel);

    printf("Enter tensil of steel: ");
    scanf("%d", &tensileOfSteel);

    if((hardnessOfSteel > 50) && (carbonContentOfSteel < 0.7) && (tensileOfSteel > 5600)){
        printf("Grade of steel is 10");

    }else if((hardnessOfSteel > 50) && (carbonContentOfSteel < 0.7)){
        printf("Grade of steel is 9");

    }else if((carbonContentOfSteel < 0.7) && (tensileOfSteel > 5600)){
        printf("Grade of steel is 8");

    }else if((hardnessOfSteel > 50) && (tensileOfSteel > 5600)){
        printf("Grade of steel is 7");

    }else if((hardnessOfSteel > 50) || (carbonContentOfSteel < 0.7) || (tensileOfSteel > 5600)){
        printf("Grade of steel is 6");

    }else{
        printf("Grade of steel is 5");
    }


    return 0;
}
