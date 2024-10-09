#include <stdio.h>
#include <math.h>

int main(){
    int year;
    printf("Enter the year that you want to compute if it is leap year or not ");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100 == 0){
            if(year%400 == 0){
                printf("year is leap year");
            }else{
                printf("Not a leap year");
            }
        }else{
            printf("year is leap year");
        }
    }else printf("Not a leap yar");
    return 0;
}
