#include<stdio.h>
void main(){
    int i,n,six=0,seven=0;
    printf("Enter num:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            six=six+6;
        }
        else{
            seven=seven+7;
        }
        if(n%2==0)
        {
            printf("%d term of series of %d :",n,six-6);
        }
        else{
            printf("%d term of series of %d :",n,seven-7);
        }
    }

}