#include<stdio.h>
int main(){
    float red, green,blue;
    float cryan,magenta,yellow,black;
    float max;
    printf("Enter red green and blue value varing from 1 to 255");
    scanf("%f %f %f", &red, &green ,&blue);
    float white;
    if (red == 0 && green  == 0 && blue == 0 ){
        cryan = 0 ;
        magenta = 0;
        yellow = 0;
        black = 1 ;

    }else{
    
     red = red /255;
     green = green /255;
     blue = blue /255;
     max = red;
     if (green >max){
        max = green ;
     }
     if(blue>max){
        max = blue;
     }
     white = max;
    cryan = (white - red )/white ;
    magenta =  (white - green )/white;
    yellow = (white - blue)/white ;
    black = 1 - white ;
    
    }
    printf("C %f M %f Y %f K %f", cryan,magenta,yellow,black);
}