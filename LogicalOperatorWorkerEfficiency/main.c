/*Find the efifcieincy of the worker*/
/*27-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float timetaken;

    printf("Enter how much time to taken to complete the work:  ");
    scanf("%f", &timetaken);

    if(timetaken >= 2 && timetaken < 3){

        printf("Worker is highly efficient");

    }else if(timetaken >= 3 && timetaken < 4){

        printf("Worker is order to improve speed");

    }else if(timetaken >= 4 && timetaken < 5){

        printf("Worker is given training to improve his speed");

    }else if(timetaken >= 5.0){

        printf("Worker is very slow. TERMINATED");

    }else{

        printf("Out of order");

    }
    return 0;
}
