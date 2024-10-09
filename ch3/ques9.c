#include<stdio.h>
int main(){
    float length , breath;
    printf("Enter the value of length and beath of rectangle");
    scanf("%f %f",&length,&breath);
    float area =  2*length*breath;
    float pari = 2*(length+breath);
    if (area>pari){
        printf("The area of ractaingle is greater than parimeter");
    }else{
        printf("The area of rectaingle is not greater than its parimeter");
    }
}   