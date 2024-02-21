#include <stdio.h>
#include <stdlib.h>
int main(){
    int option , sales;
    float salary,price,total_price=0;
    while (1 == 1){
        printf("\nOptions :\n\n");
        printf("1. calculate your salary\n");
        printf("\n-> ");
        scanf("%d",&option);
        if (option == 1){
            system("clear");
            printf("total sale of this month\t: ");
            scanf("%d",&sales);
            for (int i=1;i<=sales;i++){
                printf("\nprice of PC num %d :",i);
                scanf("%f",&price);
                total_price = total_price + price;
            }
            system("clear");
            salary = 1500 + (sales * 200) + (total_price * 0.2);
            printf("\nyour salary on this month is %.2f\n", salary);
            break;
            
        }else{
            system("clear");
            printf("\n!!invalid option!!\n");
        }
        
    }
}