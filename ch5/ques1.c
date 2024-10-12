#include<stdio.h>
int main(){
    int hour,overtime,overtimepay,emp ;
    
    emp = 1;
    while (emp <= 10){
        printf("\nEnter the number of hours a employee worked extra ");
        scanf("%d",&hour);
        if(hour>=40){
            overtime = hour -40;
            overtimepay = overtime * 12;
            printf("The employee worked %d hours extra so they will get %d extra amount \n", overtime,overtimepay );
        }
        else{
            printf("The employee worked less then 40 hours so they will not get any overtime pay\n");
        }
       emp++;
    }
    return 0;
}