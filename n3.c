#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for(int i = 1; i<=a; i++){
        if(i % 2 == 0){
            printf("even %d\n",i);
        }else{
            continue;
        }
    }
}