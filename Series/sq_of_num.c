#include<stdio.h>
#include<math.h>
void main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(n%2!=0){
        printf("%d\n",(int)pow(2,n/2));
    }
    else{
        printf("%d\n",(int)pow(3,(n/2)-1));
    }
}