/*Lower case alphabet or not using ternary or conditional operator*/
/*26-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Enter only lower case or upper case character: ");
    scanf("%c",&ch);

    ch >= 'A' && ch <= 'Z' ? printf("Capital Case") : printf("Lower Case");

    return 0;
}
