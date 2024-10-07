#include <stdio.h>
#include <math.h>
int main(){
    int C = 30;
    int D = 40;
    int temp = C;
    C = D;
    D = temp;
    printf("%d %d", C, D);
    return 0;
}