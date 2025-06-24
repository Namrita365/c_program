/*pos neg using if-elseif-else*/
#include<stdio.h>
void main(){
    int a ;
    printf("enter a:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("pos num");

    }
    else if(a==0){
        printf("num is zero");
    }
    else{
        printf("neg num");
    }
}