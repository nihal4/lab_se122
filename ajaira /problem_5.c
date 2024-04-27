#include <stdio.h>

int main(){
    int id[3] = {1002, 1076, 1069};

    int id_in;
    printf("search ID :\t");
    scanf("%d",&id_in);

    for(int i = 0; i<3; i++){
        if(id[i] == id_in){
            printf("its in index %d\n", i);
        }else{
            continue;
        }
    }
}