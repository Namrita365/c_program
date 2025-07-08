#include<stdio.h>
int main()
{
    int i,n;
    printf("enter how many natural numbers you want:");
    scanf("%d",&n);
    printf("The natural numbers are:");
    i=1;
    while(i<=n){
        printf("%d\t",i);
        i++;
    }
}