#include <stdio.h>

int main(){
    int arif_age , fahmid_age , joy_age;
    printf("enter age for Arif , Fahmid & Joy : ");
    scanf("%d%d%d",&arif_age,&fahmid_age,&joy_age);
    if(arif_age < fahmid_age && arif_age < joy_age){
        printf("arif is youngest");
    }else if(fahmid_age < arif_age && fahmid_age < joy_age){
        printf("Fahmid is youngest");
    }else{
        printf("joy is youngest");
    }
}