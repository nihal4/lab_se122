#include <stdio.h>
int main()
{
    int nums[5],sum=0;
    for(int i =0; i<5 ;i++){
        scanf("%d",&nums[i]);
    }
    for(int i = 0; i<5; i++){
        sum += nums[i];
    }
    printf("Agrregate:%d\nAvarage:%d\n",sum,sum/5);
}

