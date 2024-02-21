#include <stdio.h>

int main(){
    int in_sec , hour, min , sec;
    printf("Enter sec\t:");
    scanf("%d",&in_sec);
    hour = in_sec/3600;
    min = (in_sec%3600)/60;
    sec = (in_sec%3600)%60;

    printf("%d hour %d min %d sec\n",hour,min,sec);
}