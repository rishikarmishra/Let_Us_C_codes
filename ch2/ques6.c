#include<stdio.h>
#include<math.h>
int main(){
    double t,v,wcf;
    printf("Enter the tempreture of air and velocity of wind ");
    scanf("%lf %lf",&t,&v);
    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v,0.16);
    printf("%lf", wcf);
    return 0;
}