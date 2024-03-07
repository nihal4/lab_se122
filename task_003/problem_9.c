#include <stdio.h>

int main(){
    int iteam_no , quantity;
    printf("enter item number and quantity :");
    scanf("%d%d",&iteam_no,&quantity);
    switch (iteam_no)
    {
    case 1:
        printf("Total : tk %.2f",4.00*quantity);
        break;
    case 2:
        printf("Total : tk %.2f",4.50*quantity);
        break;
    case 3:
        printf("Total : tk %.2f",5.00*quantity);
        break;
    case 4:
        printf("Total : tk %.2f",2.00*quantity);
        break;
    case 5:
        printf("Total : tk %.2f",1.50*quantity);
        break;

    default:
        printf("invalid item no.");
        break;
    }
}