#include <stdio.h>

int main(){
    int arr[3][3],srh,found=0;
    for(int i =0; i<3;i++){
        for(int j=0; j<3; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("search :");
    scanf("%d",&srh);

    for(int i =0; i<3;i++){
        for(int j=0; j<3; j++){
            if (srh == arr[i][j]){
                printf("%d in index %d,%d",srh,i,j);
                found = 1;
            }
        }
    }
    if(!found){
        printf("not found");
    }
    

}