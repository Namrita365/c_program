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
    printf("Classifying the elements\n:");
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            printf("%d is even\n ",a[i]);
        }
        else{
            printf("%d is odd\n",a[i]);
        }
    }

    return 0;

}