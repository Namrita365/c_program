/*Also known as strong number 
1.segreget 
2.fact of each digit
3.summate all digit factorials
ex: 145=1!+4!+5!=1+24+120=145
*/
#include<stdio.h>
void main(){
    int n,sum=0,digit,fact,temp;
    printf("Enter num:");
    scanf("%d");
    temp=n;
    while(temp!=0){
        digit=temp%10;
        fact=1;
        for(int i=1;i<=digit;i++){
            fact=fact*i;

        }
            temp/=10;
            sum += fact;
        if(n==sum)
        {
            printf("strong num");

        }
        else{
            printf("not strog num");
        }
    }

}