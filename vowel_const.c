#include<stdio.h>
void main(){
    char ch;
    printf("enter a char in lower or upper case:");
    scanf("%c",&ch);
    if((ch>='a'&& ch<='z')||(ch>='A'&&ch<='Z'))
    {
      if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("vowel");
      }
      else{
        printf("consonent");
      }
    }
    else{
        printf("non alphabet");
    }
}