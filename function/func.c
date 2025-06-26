//arg pass and return val
#include<stdio.h>
int add(int a , int b){
    return a+b;

}
int main(){
    int x,y;
    printf("enter x and y:");
    scanf("%d %d",&x,&y);
    int result =add(x,y);
    printf("sum:%d",result);
    return 0;
}