#include <stdio.h>

int main(){
    float total, total_profit , one_product_price , one_product_profit;

    printf("total price of 15 item\t: ");
    scanf("%f",&total);
    printf("\ntotal profit of 15 item\t: ");
    scanf("%f",&total_profit);

    one_product_price = total /15;
    one_product_profit = total_profit / 15;

    printf("\ncost price of one item : %.2f", one_product_price+one_product_profit);
}