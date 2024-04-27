#include <stdio.h>

int main()
{

     int get_num;

     scanf("%d", &get_num);
     int arr[5] = {1, 2, 3, 4, 5};

     int True = 0;

     for (int i = 0; i <= 5; i++)
     {
         if (arr[i] == get_num){
           True = 1;
         }
     }

     if (True == 1){
          printf("FOUND");
     }else{
          printf("NOT FOUND");
     }
}
