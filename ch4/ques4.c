#include <stdio.h>
#include<math.h>
int main(){
    float s1,s2,s3;
    printf("Enter the three sides of triand]gle ");
    scanf("%f %f %f",&s1, &s2, &s3);
    if (s1 != s2 && s2 != s3 && s1 != s3){
        printf("The triangle is Scalen triangle \n");
    }
    if(s1 == s2 && s2 != s3 || s1 == s3 && s3 != s2 || s2 == s3 && s3 != s1){
        printf("the Triangle is Isosceles \n");
    }
    if (s1 == s2 && s2== s3){
        printf("The Triangle is Equilateral triangle ");
    }
    float a,b ,c;
    a = (s1 * s1) == (s2*s2) + (s3 * s3);
    b = (s2 * s2) == (s3 *s3) + (s1 * s1);
    c = (s3 * s3) == (s1 * s1) + (s2 * s2);
    if (a || b || c){
        printf(" The Triangle is Right angle triangle ");
    }
    return 0;
}