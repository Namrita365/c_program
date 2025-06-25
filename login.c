#include<stdio.h>
#include<string.h>
int main()
{
    char username[10],password[10];
    printf("enter your name:\n");
    scanf("%s",&username);
    printf("enter your pasword:");
    scanf("%s",&password);
    if(strcmp(username,"admin")==0){
        if(strcmp(password,"1234")==0){
            printf("acess granted,welcome admin");
        }
        else{
            printf("wrong password");
        }
    }
    else{
        printf("wrong username");
    }
    return 0;

}