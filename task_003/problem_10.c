#include <stdio.h>

int main(){
    int numA, numB;
    printf("enter two number : ");
    scanf("%d%d",&numA,&numB);
    if(numB % numA == 0){
        printf("are multiples");
    }else{
        printf("arent multiples");
    }
}