#include<stdio.h>
int main()
{
    int i;
    char word[100];
    int l=0;
    printf("enter the string:");
    scanf("%c,word");
    while(word[l!='\0']){
        l++;
    }
    printf("reversed word:");
    for(i=l-1;i>=0;i--){
        printf("reverse:%c",word);
    }
}