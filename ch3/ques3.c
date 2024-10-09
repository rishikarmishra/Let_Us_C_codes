#include<stdio.h>
#include<math.h>
int main(){
    int year;
    printf("Enter the year that you want to check weather it is leap year or not ");
    scanf("%d",&year);
    if(year%4 ==0 && year%100 != 0 || year%400 == 0){
        printf("The year is a Leap year ");
    }else {
        printf("The year that you enterd is not a leap year");
    }
    return 0;
}