/*Write a c program to find the max value and min value without using any conditions or ternary operator*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
    int a,b,min,max;
    printf("Enter a and b values :");
    scanf("%d %d",&a,&b);
    max=((a+b)+abs(a-b))/2;
    min=((a+b)-abs(a-b))/2;
    printf("maximum value:%d",max);
    printf("minimum vlaue:%d",min);
}