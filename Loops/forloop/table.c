#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a num:");
    scanf("%d",&n);
    printf("table of %d\n",n);
    for(i=1;i<=20;i++){
        printf("%dX%d=%d\n",n,i,n*i);
    }

}