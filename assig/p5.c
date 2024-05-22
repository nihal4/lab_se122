#include <stdio.h>
#include <string.h>
int main(){
    char text[100] ;
    gets(text);

    if (strchr(text,' ') != NULL){
        printf("Found");
    }else{
        printf("Not Found");
    }
}