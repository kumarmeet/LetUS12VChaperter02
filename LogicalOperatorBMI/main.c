/*Zodiac sign corresponding month and date*/
/*28-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float weight, height, bmi;

    printf("Enter body weight (in kg): ");
    scanf("%f", &weight);

    printf("Enter body height (in meters): ");
    scanf("%f", &height);

    bmi = (float) (weight / (height * height));

    if (bmi < 15){
        printf("Your BMI is %f: \n",bmi);
        printf("Starvation\n");

    }else if(bmi >= 15 && bmi <= 17.5){
        printf("Your BMI is %f: \n",bmi);
        printf("Anorexic\n");

    }else if(bmi >= 17.6 && bmi <= 18.5){
        printf("Your BMI is %f: \n",bmi);
        printf("Under Weight\n");

    }else if(bmi >= 18.6 && bmi <= 24.9){
        printf("Your BMI is %f: \n",bmi);
        printf("Ideal\n");

    }else if(bmi >= 25 && bmi <= 25.9){
        printf("Your BMI is %f: \n",bmi);
        printf("Over Weight\n");

    }else if(bmi >= 30 && bmi <= 30.9){
        printf("Your BMI is %f: \n",bmi);
        printf("Obese\n");

    }else if(bmi >= 40){
        printf("Your BMI is %f: \n",bmi);
        printf("Morbidly Obese\n");

    }else{
        printf("Error");
    }
    
    

    return 0;
}