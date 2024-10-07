#include <stdio.h>
int main(){
    printf("Write a 5 degit number that you want to reverse");
    int a;
    scanf("%d", &a);
    int digit = a%10;
    int rev = 0;
    rev = rev * 10 + digit;
    a = a /10;
    digit = a %10;
    rev = rev * 10 + digit ;
    a = a/10;
    digit = a %10;
    rev = rev * 10 + digit ;
    a = a/10;
    digit = a %10;
    rev = rev * 10 + digit ;
    a = a/10;
    digit = a %10;
    rev = rev * 10 + digit ;
    
    printf("%d", rev );
    return 0;
}