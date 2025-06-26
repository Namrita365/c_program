//Ex:2-prg for pass arg no return val
#include<stdio.h>
void number(int a)
{
   printf("double of  the num %d is %d",a,2*a);
}
int main()
{   int num;
    printf("enter anum:");
    scanf("%d",&num);
    number(num);
    return 0;
}