#include<stdio.h>
int main(){
    
    int i =0;
   
    while (i<= 255){
         char ascii = i;
        printf(" %d %c",i,ascii);
        i++;
    }
    return 0;
}