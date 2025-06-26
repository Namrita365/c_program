//no arg pass return val
#include<stdio.h>
int namrita(){
    int x;
    printf("enter a num:");
    scanf("%d",&x);
    return x;
}
int main()
{
    int num=namrita();
    printf("the value stored is %d",num);
}