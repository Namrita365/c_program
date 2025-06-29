#include<stdio.h>
int main(){
    int a[10],n,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 
    printf("reverse order");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
    return 0;

}