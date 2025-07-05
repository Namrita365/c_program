#include <stdio.h>
int main() {
	
    int n,temp,sum=0,rem;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    printf("%d",sum);
    return 0;
}
