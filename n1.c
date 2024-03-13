#include <stdio.h>

int main()
{
    int taken_number, initial = 1;
    scanf("%d", &taken_number);
    printf("\n\n");
    for (int i = 1; i <= taken_number; i++)
    {

        for (int l = i; l <= taken_number; l++)
        {
            if (l < taken_number)
            {
                printf("\t");
            }
            else
            {
                for (int j = 1; j <= i; j++)
                {
                    printf("%d\t", j);
                }
                for (int k = (i - 1); k >= 1; --k)
                {
                    printf("%d\t", k);
                }
            }
        }

        printf("\n\n");
    }
}

/*
for(int i = 1; i<=taken_number;i++){
        for(int j = 1 ; j<=i; j++){
            printf("%d ",j);
        }
        for(int k = (i-1); k>=1;--k){
            printf("%d ",k);
        }
        printf("\n\n");
    }
*/