#include<stdio.h>
int main(){
    int n,a[50],i,sum=0;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("Enter the elements to add:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){    sum=sum+a[i];}
    printf("Sum=%d",sum);

}