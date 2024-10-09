#include<stdio.h>
int main(){
    int fiveDigitNum, rev = 0,original;
    printf("Enter a 5 digit number ");
    scanf("%d" ,&fiveDigitNum);
    original = fiveDigitNum;
    rev = rev * 10 + fiveDigitNum%10;
    fiveDigitNum = fiveDigitNum/10;
    rev = rev * 10 + fiveDigitNum%10;
    fiveDigitNum = fiveDigitNum/10;
    rev = rev * 10 + fiveDigitNum%10;
    fiveDigitNum = fiveDigitNum/10;
    rev = rev * 10 + fiveDigitNum%10;
    fiveDigitNum = fiveDigitNum/10;
    rev = rev * 10 + fiveDigitNum%10;
    fiveDigitNum = original;
    if(fiveDigitNum == rev){
        printf("The number of five digit that you entered earliar and reverse of it is equal \n");
    }else{
        printf("The Number that you entered earlier is Nor equal to its Reverse ");
    }
    
    return 0;
}