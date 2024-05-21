#include <stdio.h>

int main(){
    int in,res=1;
    scanf("%d",&in);

    for (int i = 1; i<= in;i++){
        res = res * i;
    }
    printf("fact of %d is %d\n",in,res);
}