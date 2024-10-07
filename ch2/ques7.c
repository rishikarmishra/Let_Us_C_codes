#include <stdio.h>
#include <math.h>

int main(){
    double angle,cossec,sec,cot ;
    printf("Enter the value of angle in degree of Triangle that you want all angles");
    scanf("%lf",&angle);
    double angleInRad = angle * M_PI /180.00;
    double sinValue = sin(angleInRad);
    double cosValue = cos(angleInRad);
    double tanValue = tan(angleInRad);
    if(sinValue != 0){
         cossec = 1/sinValue;
    }else{
        printf("The cossec value is not available for for the given angle \n");
    }
    if(cosValue != 0){
         sec = 1/cosValue;
    }else{
        printf("The sec value is not available for for the given angle \n");
    }
    if(tanValue != 0){
         cot = 1/tanValue;
    }else{
        printf("The cot value is not available for for the given angle \n");
    }
    printf("The value of angles are as following \n");
    printf("Value of sin is  %lf \n Value of cos is  %lf \nValue of tan is %lf\n Value of cossec is  %lf \n vlue of sec is %lf \n Value of cot is %lf ", sinValue, cosValue, tanValue, cossec,sec,cot);
    return 0;
}
