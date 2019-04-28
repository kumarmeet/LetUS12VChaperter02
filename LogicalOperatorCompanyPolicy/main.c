/*Implement the company policy*/
/*28-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int quantity ,     stock;
    char credit ;

     printf("Enter company stock item: ");
    scanf("%d", &stock);

    printf("Enter quantity of item: ");
    scanf("%d", &quantity);

    printf("Credit is ok. Only type y or n: ");
    scanf(" %c", &credit);


    if(quantity <= stock  && credit == 'y'){

        printf("Supply his requirement");

    }else if(credit == 'y' && quantity > stock){

        printf("Balance will be shipped later");

    }else if(quantity <= stock  && credit == 'n'){

        printf("Credit is not ok, do not supply");

    }else{

        printf("Error");

    }

    return 0;
}
