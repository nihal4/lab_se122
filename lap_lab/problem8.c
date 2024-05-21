#include <stdio.h>
int main()
{
    int number[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 9; i++)
    {
        if (number[i] % 2 != 0)
        {
            printf("odd: %d\n", number[i]);
        }
        else
        {
            continue;
        }
    }
}