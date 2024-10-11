#include<stdio.h>
 #include <stdlib.h>
int main(){
    float hn,cs,ts;
    printf("Enter the hardness ,carbon content and tenstile strength");
    scanf("%f %f  %f",&hn,&cs,&ts);
    printf("the grade of steel is ");

    if(hn >50 && cs<0.7 && ts >5600){
        printf("Grade 10");
        exit(0);
    }
    if(hn >50 && cs<0.7 && ts<=5600){
        printf("Grade 9");
        exit(0);
    }
    if(hn <= 50 && cs<0.7 && ts >5600){
        printf("Grade 8");
        exit(0);
    }
    if(hn > 50 && cs>=0.7 && ts >5600){
        printf("Grade 7");
        exit(0);
    }
    if(hn >50  || cs<0.7 || ts >5600){
        printf("Grade 6");
        exit(0);
    }
    
        printf("Grade 5");

    
    return 0;
}