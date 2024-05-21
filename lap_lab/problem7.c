#include <stdio.h>

int main(){
    int arr[5] = {7,4,6,7,5};
    int ar_size = 5;
    
    for (int step = 0; step < ar_size - 1; ++step) {

        int swapped = 0;

        for (int i = 0; i < ar_size - step - 1; ++i) {

            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
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