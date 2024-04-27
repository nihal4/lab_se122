#include <stdio.h>

int main(){
    int id[6] = {1,2,3,4,5,6};

    int id_in;
    printf("search :\t");
    scanf("%d",&id_in);

    for(int i = 0; i<5; i++){
        if(id[i] == id_in){
            printf("%d in index %d\n",id_in, i);
        }else{
            continue;
        }
    }
}