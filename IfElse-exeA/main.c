/*Determine whether the seller has made profit or loss also how much profit he made or loss*/
/*25-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sellingPrice, costPrice, profit, loss, profitItem, lossItem;

    printf("Enter selling price of an item: ");
    scanf("%d",&sellingPrice);

    printf("Enter cost price of an item: ");
    scanf("%d",&costPrice);

    if(sellingPrice < costPrice){
        //determined loss
        lossItem = costPrice - sellingPrice;
        printf("Seller has loss Rs.%d",lossItem);

    }else if(sellingPrice > costPrice){
        //determined profit
        profitItem = sellingPrice - costPrice;
        printf("Seller has profit Rs.%d",profitItem);
    }

    return 0;
}
