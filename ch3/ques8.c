#include <stdio.h>
#include<math.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>=0){
        printf("%d",num);
    }
    else{
        num = -1 * num;
        printf("%d",num);
    }
    return 0;
}