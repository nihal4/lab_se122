#include <stdio.h>

int main(){
    float num_one, num_two, num_three;
    printf("Enter Number One\t: ");
    scanf("%f",&num_one);
    printf("Enter Number Two\t: ");
    scanf("%f",&num_two);
    printf("Enter Number Three\t: ");
    scanf("%f",&num_three);
    
    printf("\n\navrage\t: %.2f",(num_one+num_two+num_three)/3);
}