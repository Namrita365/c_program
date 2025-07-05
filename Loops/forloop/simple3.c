//when two conditions are given then it considers 2nd condition
#include<stdio.h>
int main()
{
    int i=1,j,n;
    printf("enter n:");
    scanf("%d",&n);
    printf("i=");
    for(i=1,j=0;i<=n,j<=n;i++)
    {
        printf("%d%d",i,j);
        if(i!=n){
            printf(",");
        }
    }
}