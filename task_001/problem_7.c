#include <stdio.h>

int main(){
    float subject_one, subject_two, subject_three, subject_four, subject_five;
    printf("Enter subject One\t: ");
    scanf("%f",&subject_one);
    printf("Enter subject Two\t: ");
    scanf("%f",&subject_two);
    printf("Enter subject Three\t: ");
    scanf("%f",&subject_three);
    printf("Enter subject four\t: ");
    scanf("%f",&subject_four);
    printf("Enter subject five\t: ");
    scanf("%f",&subject_five);
    
    printf("\n\navrage\t: %.2f\ntotal\t: %.2f",(subject_one+subject_two+subject_three+subject_four+subject_five)/5,(subject_one+subject_two+subject_three+subject_four+subject_five));
}