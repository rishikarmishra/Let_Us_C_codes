#include<stdio.h>
int main(){
    float degree_f ;
    scanf("%f", &degree_f);
    float degree_celsius = (5/9.0) * (degree_f - 32);
    printf("%f", degree_celsius);
}