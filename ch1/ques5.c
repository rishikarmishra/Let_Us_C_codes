#include<stdio.h>
int main(){
    float length,breadth,radius;
    scanf("%f %f %f", &length ,&breadth, &radius);
    float area_rectangle = (length*breadth);
    float parimeter = 2*(length + breadth);
    float area_circle =  22/7.0 * radius * radius;
    float circumference_circle = 2 * 22/7.0 * radius;
    printf("%f %f %f %f", area_rectangle,parimeter,area_circle,circumference_circle);
}
