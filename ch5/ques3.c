#include<stdio.h>
int main(){
    int pow;
    int num ;
    printf("Enter the value of numbber and its raised power that you want to calculate");
    scanf("%d %d",&num, &pow);
    int power = 1;
    int i = 1;
    while(i <= pow){
        power = power * num;
        i++;
    }
    printf("The power is %d",power);
    return 0;
}