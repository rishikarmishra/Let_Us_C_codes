#include<stdio.h>

int main(){
    int marksM,marksS,marksE,marksH,marksSS;
    scanf("%d %d %d %d %d", &marksM,&marksS,&marksE,&marksH,&marksSS);
    int agrigate_marks = (marksM + marksS +marksE +marksH + marksSS );
    int percent = agrigate_marks/500.0 *100;
    printf("%d percent ",percent );
    //23printf("%");
}