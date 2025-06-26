#include<stdio.h>
int calc(int num){
    printf("square of %d is %d",num,num*num);
}
int input(){
    int x;
    printf("enter num:");
    scanf("%d",&x);
    calc(x);
}
int main(){
    input();
    return 0;
    
}