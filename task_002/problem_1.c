#include <stdio.h>

int main(){
    int num1,num2,num3;

    printf("number one:\t");
    scanf("%d",&num1);
    printf("number two:\t");
    scanf("%d",&num2);
    printf("number three:\t");
    scanf("%d",&num3);

    if (num1 > num2 && num1 > num3){
        printf("%d is grater", num1);
    }else if (num2 > num1 && num2 > num3){
        printf("%d is grater", num2);
    }else if (num3 > num1 && num3 > num2){
        printf("%d is grater", num3);
    }
    
}