#include<stdio.h>
int main(){
    float angle1,angle2,angle3;
    printf("Enter all the angle of the triangle ");
    scanf("%f %f %f", &angle1, &angle2,&angle3);
    if(angle1 +angle2 + angle3 == 180){
        printf("This is a perfect triangle ");
    }else{
        printf("Not a proper triangle ");
    }
}