#include<stdio.h>
int main(){
    char a ;
    printf("enter the charector that you want to check weather it is capital letter ,small or special cherector "); 
    scanf("%c",&a);
    if(a<=90 && a>= 65){
        printf("%c is Capital letter",a);
    }
    else if(a>=97 && a<= 122){
        printf("%c is Small letter",a);
    }
    //   33 to 47: Includes symbols like !, ", #, $, %, &, ', (, ), *, +, ,, -, ., /.
    //   58 to 64: Includes symbols like :, ;, <, =, >, ?, @.
    //   91 to 96: Includes symbols like [, \, ], ^, _, `.
    //   123 to 126: Includes symbols like {, |, }, ~.

    else if ((a<=47 && a>=33) || (a >=58 && a <=64) || (a>= 91 && a <=96)|| (a>= 123 && a<= 126 )){
        printf("%c is special cherector ",a);
    }
    return 0;
}