#include<stdio.h>
int main(){
    int i,j,n,a[100],pos;
    printf("Enter the numbers of elements:");
    scanf("%d",&n);
    printf("Enter %d element:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the postion to delete:");
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}