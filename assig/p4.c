#include <stdio.h>
#include <string.h>
int main(){
    char i[6],j[6],k[6],result[19];
    scanf("%s",i);
    scanf("%s",j);
    scanf("%s",k);

    strcpy(result, i);
    strcat(result,j);
    strcat(result,k);

    int len = strlen(result);

    printf("%s\nsize: %d",result,len);
    
}