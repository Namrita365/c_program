//arg pass and return val
#include<stdio.h>
int add(int a , int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int main(){
    int x,y;
    printf("enter x and y:");
    scanf("%d %d",&x,&y);
    int result =add(x,y);
    int res=sub(x,y);
    printf("sum:%d",result);
    printf("sub:%d",res);
    return 0;
}





// #include<stdio.h>
// int op(int a , int b){
//     return a+b;
//     return a-b;
// }

// int main(){
//     int x,y;
//     printf("enter x and y:");
//     scanf("%d %d",&x,&y);
//     int result =op(x,y);
//     int res=op(x,y);
//     printf("sum:%d",result);
//     printf("sub:%d",res);
//     return 0;
// }