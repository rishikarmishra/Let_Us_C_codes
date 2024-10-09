#include<stdio.h>
#include<math.h>
int main(){
    float x1 = 1,y1= 2,x2 = 2,y2 = 4,x3= 3,y3= 6;
    float areaTri = 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    if(areaTri == 0){
        printf("The three points lies on same plain");
    }else{
        printf("They dont lie on same line ");
    }
    return 0;
}