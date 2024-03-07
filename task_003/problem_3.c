#include <stdio.h>

int main(){
    int ang_one , ang_two , ang_three;
    printf("enter angles : ");
    scanf("%d%d%d",&ang_one,&ang_two,&ang_three);
    if (ang_one+ang_two+ang_three == 180){
        printf("this a valid traiangle");
    }else{
        printf("this is not valid trainagle");
    }
}