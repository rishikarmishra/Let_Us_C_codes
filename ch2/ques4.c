#include <stdio.h>
#include <math.h>
int main(){
    float x,y;
    printf("(");
    scanf("%f %f", &x,&y);
    printf(")");
    float r;
    r = sqrt(pow(x,2) + pow(y,2));
    float theta ;
    theta = atan2(y,x);
    theta = theta * 180/3.14;
    printf("%f %f ", r,theta);
    return 0;

}