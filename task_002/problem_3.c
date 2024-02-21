#include <stdio.h>

int main(){
    char user_input;
    printf("inter a char\t: ");
    scanf("%c",&user_input);
    if (user_input >= 'A' && user_input <= 'Z' || user_input >= 'a' && user_input <= 'z'){
        printf("%c is an alphabet", user_input);
    }else{
        printf("%c is not an alphabet", user_input);
    }
}