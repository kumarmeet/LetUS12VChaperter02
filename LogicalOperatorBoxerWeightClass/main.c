/*In boxing the weight class of a boxer*/
/*28-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boxerWeight;

    printf("Enter weight of boxer in pounds: ");
    scanf("%d", &boxerWeight);

    if(boxerWeight <=115){

    printf("Boxer is in flyweight");

    }else if(boxerWeight >115 && boxerWeight <= 121){

        printf("Boxer is in bantamweight");

    }else if(boxerWeight >=122 && boxerWeight <= 153){

        printf("Boxer is in featherweight");

    }else if(boxerWeight >=154 && boxerWeight <= 189){

        printf("Boxer is in middleweight");

    }else if(boxerWeight >= 190){

        printf("Boxer is in heavyweight");

    }

    return 0;
}
