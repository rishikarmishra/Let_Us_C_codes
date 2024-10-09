#include<stdio.h>
int main(){
    int ageRam,ageSham,ageAjay;
    printf("Enter the age of Ram \n");
    scanf("%d",&ageRam);
    printf("Enter the age of Sham \n");
    scanf("%d",&ageSham);
    printf("Enter the age of Ajay \n");
    scanf("%d",&ageAjay);
    if (ageRam<ageSham){
        if(ageRam<ageAjay){
            printf("Ram is the YOungest\n");
        }
    }
    if (ageSham<ageRam){
        if (ageSham<ageAjay)
        {
           printf("Sham is Youngest of all time \n");
        }
        
    }
    if(ageAjay<ageRam){
        if(ageAjay<ageSham){
            printf("Ajay is Youngest of all three");
        }
    }
    
    
    return 0;

}