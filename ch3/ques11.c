#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2,radius,d;
    printf("Enter the circle center and its coordinate as x and y coordianate ");
    scanf("%f %f",&x1,&x2);
    printf("Enter the radius of circle ");
    scanf("%f",&radius);
    printf("Enter the coodinate that you want to check wheather it lies within the circle or not ");
    scanf("%f %f", &x2,&y2);
    d = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    if(d<radius){
        printf("the points lies within the circle ");
    }else{
        printf("it does't lie within the circle ");
    }
    return 0;
}