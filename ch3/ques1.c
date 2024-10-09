#include<stdio.h>
#include<math.h>
int main(){
    float cP,sP;
    printf("Enter the value of cost prise and selling prise ");
    scanf("%f %f", &cP, &sP);
    float profit;
    float loss;
    if(sP>cP){
        printf("Profit");
        profit = cP - sP;
        printf("%f",profit);
    }
    else {
        printf("Loss");
        loss = sP - cP;
        printf("%f",loss);
    }
}