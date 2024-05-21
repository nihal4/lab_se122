#include <stdio.h>

int main(){
    int arr[5] = {7,4,6,7,5};
    int ar_size = 5;
    
    for (int i = 0; i < ar_size - 1; ++i) {

        int swapped = 0;

        for (int j = 0; i < ar_size - i - 1; ++j) {

            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        if (swapped == 0) {
            break;
        }
    }
    for(int i =0; i<ar_size;i++){
        printf("%d ",arr[i]);
    }
}