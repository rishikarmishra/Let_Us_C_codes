#include<stdio.h>
#include<math.h>
int main(){
    int num,set,min,max,range;
    int flag =0;
    printf("Enter a length of set that you want calculate ");
    scanf("%d",&set);
    while(set >0){
        printf("Enter the numbers");
        scanf("%d",&num);
        if(flag == 0){
            min = max = num;
            flag = 1;
        }
        else {
           if(num<min){
            min = num;
           }
           if(num>max){
            max = num;
           }

        }
        set--;
    }
    if(min<0){
        range = min + max;
    }
    else{
        range = max - min;
    }
    if (range <0){
        range = range * -1;
    }

    printf("The range of the number is %d ",range);
    return 0;
}