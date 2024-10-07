#include <stdio.h>
#include <math.h>

int main(){
    float L1,G1,L2,G2;
    printf("enter the latitude and longitude of 1st coordinate ");
    scanf("%f %f", &L1,&G1);
    printf("enter the latitude and longitude of 2nd coordinate ");
    scanf("%f %f", &L2,&G2);
    L1 = L1 * M_PI /180;
    L2 = L2 * M_PI /180;
    G1 = G1 * M_PI /180;
    G2 = G2 * M_PI /180;
    float a = pow(sin((L2-L1)/2),2) + cos(L1) * cos(L2) * pow(sin((G2-G1)/2),2);
    float c = 2 * atan2(sqrt(a),sqrt(1-a));
    float d = 6371 * c;
    printf("%f", d);
}