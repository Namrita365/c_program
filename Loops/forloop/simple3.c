#include<stdio.h>
int main()
{
    int i=1,j,n;
    printf("enter n:");
    scanf("%d",&n);
    printf("i=");
    for(i=1,j=0;;i++)
    {
        printf("%d%d",i,j);
        if(i!=n){
            printf(",");
        }
    }
}