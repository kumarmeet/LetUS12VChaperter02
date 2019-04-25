/*Determine youngest of the three*/
/*25-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ramAge, shyamAge, ajayAge;

    printf("Enter age of Ram: ");
    scanf("%d", &ramAge);

    printf("Enter age of Shyam: ");
    scanf("%d", &shyamAge);

    printf("Enter age of Ajay: ");
    scanf("%d", &ajayAge);

    if((ramAge < shyamAge) && (ramAge < ajayAge)){
        printf("Ram age is = %d, Shyam age is = %d and Ajay age is = %d", ramAge, shyamAge, ajayAge);
        printf("\nRam is younger");
    }else if((shyamAge < ramAge) && (shyamAge < ajayAge)){
        printf("Ram age is = %d, Shyam age is = %d and Ajay age is = %d", ramAge, shyamAge, ajayAge);
        printf("\nShyam is younger");
    }else{
        printf("Ram age is = %d, Shyam age is = %d and Ajay age is = %d", ramAge, shyamAge, ajayAge);
        printf("\nAjay is younger");
    }

    return 0;
}
