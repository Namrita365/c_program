#include<stdio.h>
int main(){
    int i,n;
    printf("enter a number to check prime or not prime:");
    scanf("%d",&n);
    if(n%2!=0 || n==2){
        printf("%d is prime number",n);
    }
    else{
        printf("%d is not a prime number ",n);
    }
}