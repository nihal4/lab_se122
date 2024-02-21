#include <stdio.h>

int main(){
    float fahrenheit, celcius;
    printf("Temperature in F : ");
    scanf("%f",&fahrenheit);
    celcius= (fahrenheit-32)*5/9;
    printf("Temperature in C : %.2f",celcius);
}