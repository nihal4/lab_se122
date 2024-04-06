#include <stdio.h>

int main() {
    int start, end, sum = 0;

    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        sum += i;
    }

    printf("The sum of numbers in the range %d to %d is: %d\n", start, end, sum);

    return 0;
}
