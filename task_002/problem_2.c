#include <stdio.h>

int main(){
    int number;
    printf("enter a number\t: ");
    scanf("%d",&number);
    if (number == 0){
        printf("%d is not even or odd",number);
    }else if (number % 2 >= 1){
        printf("%d is odd\n", number);
    }else if(number % 2 == 0){
        printf("%d is even\n",number);
    }
}