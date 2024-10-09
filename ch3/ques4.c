#include<stdio.h>
int main(){
    int year ,leapdays ,firstday;
    long int normalday,totaldays;
    printf("Enter the value of year");
    scanf("%d",&year);
    normalday = (year-1) * 365;
    leapdays = (year-1 )/4 - (year-1)/100 +(year-1)/400;
    totaldays = normalday + leapdays;
    firstday = totaldays%7;
    if(firstday == 0){
        printf("Monday");
    }
    else if(firstday == 1){
        printf("Tuesday");
    }
    else if (firstday == 2){
        printf("Wednesday");
    }
    else if (firstday == 3){
        printf("Thursday");
    }
    else if (firstday == 4){
        printf("Friday");
    }else if (firstday == 5){
        printf("Saturday");
    }else if (firstday == 6){
        printf("Sunday");
    }
    return 0;
}