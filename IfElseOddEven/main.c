/*Check whether number is odd or even*/
/*25-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter a whole number: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d is a even number",num);
    }else{
        printf("%d is a odd number", num);
    }
    return 0;
}
