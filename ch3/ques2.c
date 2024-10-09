#include <stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number that you wnat to check wheather it is even or odd");
    scanf("%d",&n);
    if(n<=0){
       printf("%d",-1);//when number is nagative ;
       
    }
    else if(n%2 ==0){
        printf("The number that you entered is even ");
    }
    else{
        printf("Number that you entered is odd");

    }
}