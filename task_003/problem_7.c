#include <stdio.h>

int main() {
    int units;
    float charge = 0;

    printf("Enter the consumption units: ");
    scanf("%d", &units);

    if (units <= 200) {
        charge = units * 0.50;
    } else if (units <= 400) {
        charge = 100 + (units - 200) * 0.65;
    } else if (units <= 600) {
        charge = 230 + (units - 400) * 0.80;
    } else {
        charge = 390 + (units - 600) * 1.00;
    }

    printf("The total charge is Tk. %.2f\n", charge);

    return 0;
}
