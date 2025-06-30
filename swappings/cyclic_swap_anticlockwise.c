#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    printf("Cyclic swapping anti-clockwise\n");
    printf("before swapping a=%d,b=%d,c=%d\n",a,b,c);
    a=a+b+c;
    c=a-(b+c);
    b=a-(b+c);
    a=a-(b+c);
    printf("after swapping a=%d,b=%d,c=%d",a,b,c);
    return 0;
}