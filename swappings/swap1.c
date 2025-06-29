//swapping of two numbers without using temp variable and any condition by using addition and subtraction
#include<stdio.h>
void main(){
    int a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping the vlaues of a:%d and b:%d",a,b);

}