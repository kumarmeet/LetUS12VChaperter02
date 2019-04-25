/*All three points fall on one straight line*/
/*25-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int x1, y1, x2, y2, x3, y3, line1, line2;

    printf("Enter 1st co-ordinate (x1, y1): ");
    scanf("%d %d",&x1, &y1);

    printf("Enter 2st co-ordinate (x2, y2): ");
    scanf("%d %d",&x2, &y2);

    printf("Enter 3st co-ordinate (x3, y3): ");
    scanf("%d %d",&x3, &y3);

    line1 = (float) (y2 - y1) / (x2 -x1);
    line2 = (float) (y3 - y2) / (x3 -x2);

    if(line1 == line2){
        printf("Three points fall on the same line");
    }else{
        printf("Three points does'nt fall on the same line");
    }
    return 0;
}
