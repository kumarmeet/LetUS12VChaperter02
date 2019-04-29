/*Find greatest of three numbers using ternary or conditional operator*/
/*26-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Enter three number: ");
    scanf("%d %d %d",&a, &b, &c);

        ((a > b) && (a > c))? printf("%d",a) :
        ((b > a) && (b > c) ? printf("%d",b) : printf("%d",c));

    return 0;
}
