#include <stdio.h>

int main(){
    int number[9] = {1,2,3,4,5,6,7,8,9};
    int sum = 0;
    for(int i = 0; i <  9; i++){
        if (number[i] % 2 != 0){
            sum = sum + number[i];
        }else{
            continue;
        }
    }
    printf("%d sum of all odd", sum);
}