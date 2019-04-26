/*Determine whether the character entered is capital letter, a small case letter, a digit or a special symbol*/
/*26-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char value;

    printf("Enter character: ");
    scanf("%c", &value);

    if(value >= 65 && value <= 90){
        printf("%c is a capital letter", value);

    }else if( value >= 97 && value <= 122){
        printf("%c is a small letter", value);

    }else if(value >= 48 && value <= 57){
        printf("%c is a number", value);

    }else if((value >= 0 && value <= 47) || (value >= 58 && value <= 64) ||
             (value >= 91 && value <= 96) || (value >= 123 && value <= 127)){
        printf("%c is a symbol", value);

    }else{
        printf("Its not a number, letter, symbol etc...");
    }

    return 0;
}
