#include <stdio.h>

int main(){
    //int number[9] = {2,5,6,7,4,6,9,8,0};
    int number[9] = {5,6,7,8,3,4,5,67,8};
    int max = number[1];
    int min = number[1];
    for( int i = 0 ; i<9 ;i++){
        if (number[i] > max){
            max = number[i];
        }else{
            continue;
        }
    }
    printf("max number is %d\n", max);
    
    for( int i = 0 ; i<9 ;i++){
        if (number[i] < min){
            min = number[i];
        }else{
            continue;
        }
    }
    printf("min number is %d\n", min);
}