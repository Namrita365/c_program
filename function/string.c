#include<stdio.h>
#include<string.h>
int main(){
    char name[10];
    printf("enter your name:");
    scanf("%s",name);//not took & cuz it directly pointed to the address
    printf(name,"")
    return 0;
    
}