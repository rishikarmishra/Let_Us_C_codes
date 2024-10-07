#include <stdio.h>
int main(){
    int dist ;
    scanf ("%d" ,&dist );
    int in_meters = dist * 1000;
    int in_centi = dist * 100000;
    int in_feet = dist * 3280.84;
    int in_inch = dist * 39370.1;
    printf("%d %d %d %d", in_meters ,in_centi,in_feet, in_inch);
}