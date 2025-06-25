#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter the size: ");
    scanf("%d",&n);
    int mid=(n+1)/2;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==mid||i==mid){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

}
