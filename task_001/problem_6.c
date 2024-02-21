#include <stdio.h>

int main(){
    float basic , dearness, rent, gross_salary;
    printf("enter basic slary\t: ");
    scanf("%f",&basic);
    dearness = basic *0.4;
    rent = basic * 0.2;
    gross_salary = basic + dearness + rent;
    printf("Gross salary\t: %.2f",gross_salary);
}