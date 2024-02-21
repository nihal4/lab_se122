#include <stdio.h>

int main(){
    float distance;
    printf("distance between Mirpur and Ashulia : ");
    scanf("%f",&distance);

    printf("cm\t:%.3f\n",distance*100);
    printf("inch\t:%.3f\n",distance*39.37);
    printf("feet\t:%.3f\n",distance*3.21);
}