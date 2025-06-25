#include<stdio.h>
int main()
{
    int n=10,k=5;
    int sale;
    scanf("%d",&sale);
    if (sale>=1 && sale<=k){
        printf("NO OF CANDIES SOLD:%d\n",sale);
        printf("NO OF CANDIES LEFT:%d\n",n-sale);
    }
    else{
        printf("invalid\n");
        printf("no of candies left:%d",n);
    }
    return 0;

}