#include<stdio.h>
int main(){
    int m = 21,p,c;
    while(m>1){
        printf("Enter the number of match stick that you want to pick \n ");
        scanf("%d",&p);
        if(p<0|| p>4){
            continue;
        }
        m = m-p;
        printf("The number of matchstick now left is %d \n ",m);
        printf("Now computer is playing \n");
        c = 5 - p;
        printf("Computer is  picking %d matchsticks \n ", c);
        m = m-c;
        printf("The number of matchstick now left is %d \n ",m);

        if (m == 1){
            printf("Computer Wins \n ");
        }
    

    }
    return 0;
}