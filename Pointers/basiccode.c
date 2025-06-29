#include<stdio.h>
int main(){
    int a=10;
    int *p;
    p=&a;
    printf("value %d",a);
    printf("Address%d",&a);
    printf("value of p:%d",p);
    printf("address of p:%d",*p);
}