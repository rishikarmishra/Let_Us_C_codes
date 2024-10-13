#include <stdio.h>
int main(){
    int num ,times,nagative = 0,positive = 0,zero =0;
    printf("Enter the number of times that you want to enter a number :");
    scanf("%d",&times);
    int i = 1;
    while(i<=times){
        printf("Enter the number \n");
        scanf("%d",&num);
        if(num<0){
            nagative = nagative + 1;
        }
        if(num > 0){
            positive = positive + 1;
        }
        if(num == 0){
            zero = zero + 1;
        }
        i ++;
    }
    printf("The numbver of Negative Numbert that you Entered is : %d \n The Number positive Number that you entered is : %d \n The Numbeer of Zeros that you Entered is : %d \n ",nagative,positive,zero);
    return 0;
}