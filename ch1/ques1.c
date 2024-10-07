#include <stdio.h>
int main(){
    float base_s;
    scanf("%f",&base_s);
    float dearness_allowance = 40/100.0 * base_s;
    float rent_allowance = 10/100.0 * base_s;
    float gross_syallary = base_s + dearness_allowance + rent_allowance;
    printf("%f /n",  gross_syallary);
    return 0;
}