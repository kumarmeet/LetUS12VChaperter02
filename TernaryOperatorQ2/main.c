/*Special character symbol or not using ternary or conditional operator*/
/*26-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Enter only lower case or upper case character: ");
    scanf("%c",&ch);

    (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')
    ? printf("Not a Special Symbol") : printf("Special Symbol");

    return 0;
}
