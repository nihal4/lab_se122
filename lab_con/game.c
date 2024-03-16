#include <stdio.h>

int main(){
    int heal,loss;
    char prompt;
    printf("Helath : 10\n");
    int health = 10;
    while (1){
        //health = health;
        //printf("Health : %d\n",health);
        scanf("%c",&prompt);
        if(prompt == 'H' || prompt == 'h'){
            
            health = health + 3;
            if(health > 10){
                health = 10;
                printf("health : %d\n",health);
            }else if (health <= 10){
                printf("health : %d\n",health);
            }
        }else if(prompt == 'L' || prompt == 'l'){
            health = health - 2;
            printf("health : %d\n",health);
            if (health == 0){
                printf("game over");
                break;
            }else{
                continue;
            }
        }

    }
}