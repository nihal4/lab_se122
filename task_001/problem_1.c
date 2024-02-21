#include <stdio.h>

int main(){
    float  num_one , num_two;
    printf("Enter Number One : ");
    scanf("%f",&num_one);
    printf("Enter Number Two : ");
    scanf("%f",&num_two);
    printf("\n\nadd\t\t: %.f\nsubtract\t: %.f\nmultiply\t: %.f\ndevide\t\t: %.2f\n",num_one+num_two,num_one-num_two,num_one*num_two,num_one/num_two);
}