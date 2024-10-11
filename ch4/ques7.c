//Bmi Report 
#include <stdio.h>
int main(){
    float weight,hight,bmi;
    printf("Enter the weight (in kg) and height of a person (in meter) in ");
    scanf("%f %f", &weight,&hight);
    bmi = weight / (hight * hight);
    if (bmi <= 15){
        printf("Starvation");
    }
    if(bmi >= 15.1 &&  bmi<= 17.5){
        printf("Anorexic");
    }
    if(bmi >= 17.6 && bmi<=18.5){
        printf("Underweight");
    }
    if(bmi >= 18.6 && bmi <=24.9){
        printf("Idel");
    }
    if(bmi>= 25 && bmi <= 29.9){
        printf("Overweight");
    }
    if(bmi>= 30 && bmi <= 39.9){
        printf("Obese");
    }
    if(bmi >= 40){
        printf("Morbidly Obese");
    }
    
    return 0;

}