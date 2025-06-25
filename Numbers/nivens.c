/*nivens or harshd number
1.segret num
2.summate
3.sum perfectly divided by num */
#include<stdio.h>
void main(){
    int n,sum,rem,temp;
    printf("Enter number:");
    scanf("%d",&n);
    temp=n;
    sum=0;
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    if(temp%sum==0){
        printf("%d is a niven number",temp);
    }
    else{
        printf("%d is not a niven number",temp);
    }

}
