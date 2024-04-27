#include <stdio.h>


int print_func(int i, int num){
   return printf("%d found on index: %d\n",num,i);
}

int main()
{
    int num,input_num;
    int num_arr[5];
    for (int i = 0; i<5;i++){
        scanf("%d",&num);
        num_arr[i] = num;
    }
    int true;
    true = 0;
    scanf("%d",&input_num);
    for (int i = 0; i<5; i++){
        if (num_arr[i] == input_num){
            print_func(i,input_num);
            true = 1;
        }
    }
    if (true == 0){
        printf("NOT FOUND");
    }
}
