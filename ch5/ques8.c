#include<stdio.h>
#include<math.h>
int main(){
    int num,rem,octal = 0,p = 0;
    printf("Enter a number that you want to check its equvalent");
    scanf("%d",&num);
    int original = num;
    while(num != 0){
       rem = num % 8;
       octal = octal + rem * pow(10,p);
       num = num / 8; 
       p++;
    }
    printf("The octal equalalent to %d is %d",original,octal);
    return 0;
}