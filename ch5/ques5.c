#include<stdio.h>
#include<math.h>
int main(){
    int a ,b ,c;
    int i = 1;
    while(i <= 500){
        a = i%10;
        b = i % 100;
        b = (b - a)/10;
        c = i /100;
        int sum ;
         //poewer
         
        if( (a*a*a) + (b*b*b) + (c*c*c) == i ){
            printf("%d \n",i);
        }
        i++;
    }
    return 0;
}