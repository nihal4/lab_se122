#include <stdio.h>

int main(){
    int number[9] = {1,2,3,4,5,6,7,8,9};
    int new_number[9];
    int j = 8;
    for(int i = 0; i <  9; i++){
        new_number[i] = number[j];
        j--; 
    }
    for(int i = 0; i <  9; i++){
        printf("%d ", new_number[i]);
    }
}