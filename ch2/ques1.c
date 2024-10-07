#include <stdio.h>
int main  (){
    int a;
    printf("Write a number of 5 defit ");
    scanf(" %d", &a);
     int degit = a%10;
     a = a /10;
     int sum = 0 ;
     sum = sum + degit;
     degit = a%10;
     a = a /10;
     sum = sum + degit;
     degit = a%10;
     a = a /10;
     sum = sum + degit;
     degit = a%10;
     a = a /10;
     sum = sum + degit;
     degit = a%10;
     a = a /10;
     sum = sum + degit;
     printf("%d",sum);
    return 0;
}