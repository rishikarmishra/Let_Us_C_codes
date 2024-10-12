#include<stdio.h>
int main(){
    int fact = 1,num;
    printf("\n Enter a number that you wnat to check what is its factorial ");
    scanf("%d",&num);
    int i = 1;
    while (i<=num ){
        fact = fact * i;
        
        i++;
    }
    printf("The factorial of %d is %d \n",num,fact);
    return 0;
}