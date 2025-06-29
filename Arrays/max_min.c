#include<stdio.h>
int main(){
    int a[100],i,n,max=0,min=0;
    printf("enter the arr size:");
    scanf("%d",&n);
    printf("Enter the elements ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++){
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("min:%d",min);
    return 0;
}