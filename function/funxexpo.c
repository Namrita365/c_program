//a^b exponent
#include<stdio.h>
int power_result(){
    int x,y;
    printf("enter base and expo:");
    scanf("%d %d",&x,&y);
    return Power(x,y);

}
int Power(int base,int expo){
    int result =1;
    for(int i=0;i<expo;i++){
        result=result*base;
    }
    return result;
}
int main(){
    int result=power_result();
    printf("Result %d",result);


}