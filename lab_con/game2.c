#include <stdio.h>

int main(){
    int num;
    while(1){
        scanf("%d",&num);
        if(num == -99999){
            break;
        }
        else if(num>0){
            printf("is positive\n");
        }else if(num < 0){
            printf("is negetive\n");
        }else{
            printf("not neg or positive");
        }
    }
}