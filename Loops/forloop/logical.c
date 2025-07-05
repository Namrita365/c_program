//logical operators in c are && ,||,!
#include<stdio.h>
int main(){
    for(int i=1,j=0;i<=100&&j<3;i++,j++)
    {
        printf("%d%d\n",i,j);
    }
}