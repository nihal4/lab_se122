#include <stdio.h>

int main() {
    char str[100];
    int alp, digit, splch, i;

    alp = digit = splch = i = 0;

    printf("\nEnter a string: ");
    fgets(str, sizeof str, stdin);

    
    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alp++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digit++;
        } else {
            splch++;
        }
        i++;
    }

    printf("Number of Alphabets: %d\n", alp);
    printf("Number of Digits: %d\n", digit);
    printf("Number of Special Characters: %d\n", splch);

    return 0;
}
