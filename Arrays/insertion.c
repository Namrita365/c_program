#include<stdio.h>
int main(){
    int i,j,n,a[100],pos,val;
    printf("Enter the numbers of elements:");
    scanf("%d",&n);
    printf("Enter %d element:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the postion to insert:");
    scanf("%d",&pos);
    printf("enter value of the position");
    scanf("%d",&val);
    for(i=n;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=val;
    n++;
        printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}