#include <stdio.h>
#include<math.h>
int main(){
    float firstSide,secondSide,thirdSide;
    printf("Enter the three sides of triand]gle ");
    scanf("%f %f %f", &firstSide ,&secondSide, &thirdSide );
    if(firstSide + secondSide > thirdSide && firstSide + thirdSide > secondSide && secondSide + thirdSide > firstSide ){
        printf("The triangle is valid ");
    }
    return 0;
}