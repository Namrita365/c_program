#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter n:");
    scanf("%d",&n);
    printf("i=");
    for(;i<=n;i++)
    {
        printf("%d",i);
        if(i!=n){
            printf(",");
        }
    }
}