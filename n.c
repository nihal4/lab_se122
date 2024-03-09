#include <stdio.h>

int main(){

    int num1,factor_count=0;
    scanf("%d",&num1);
    for(int i = 1; i<=num1;i++){

        if(num1 %i ==0){
            factor_count = factor_count+1;
        }else{
            continue;
        }
        
    }
    //printf("%d",factor_count);
    if(factor_count > 2){
        printf("%d is not prime number",num1);
    }else{
        printf("%d is prime number",num1);
    }

}