#include<stdio.h>
#include<math.h>
 int main(){
    int N ;
    scanf("%d", &N);
    int notes100,notes50,notes10,notes5,notes2,notes1,rem;
    notes100 = N/100;
    rem = N%100;
     N = rem;
    notes50 = N/50;
    rem = N%50;
    N = rem;
    notes10 = N /10;
    rem = N%10;
    N = rem;
    notes5 = N /5;
    rem = N%5;
    N = rem;
    notes2 = N /2;
    rem = N%2;
    N = rem;
    notes1 = N/1;
    rem = N%1;
    N = rem;
    printf("Notes of Rs 100 for %d is %d .\n",N,notes100);
    printf("Notes of Rs 50 for %d is %d .\n", N,notes50);
    printf("Notes of Rs 10 for %d is %d .\n", N,notes10);
    printf("Notes of Rs 5 for %d is %d .\n", N,notes5);
    printf("Notes of Rs 2 for %d is %d .\n", N,notes2);
    printf("Notes of Rs 1 for %d is %d .\n", N,notes1);
   return 0;
 }