#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="Lavender Brown";
    char str2[]="Brand new lover";
    char s1[100],s2[100];
    int c1=0,c2=0;
    int i,j,temp;
    //removinf spaces
    for(i=0;str1[i]!='\0';i++){
        if(str1[i]!=' '){
            if(str1[i]>='A'&&str1[i]<='Z'){
                s1[c1++]=str1[i]+32;
            }
            else{
                s1[c1++]=str1[i];
            }
        }
    }
    s1[c1]="\0";
    //str2 spaces remove
    for(i=0;str2[i]!='\0';i++){
        if(str2[i]!=' '){
            if(str1[i]>='A'&&str1[i]<='Z'){
                s2[c2++]=str2[i]+32;
            }
            else{
                s2[c2++]=str2[i];
            }
        }
    }
    s2[c2]="\0";
    //sort 1
    for(i=0;i<c1-1;i++){
        for(j=i+1;j<c1;j++){
            if(s1[i]>s1[j]){
                temp=s1[i];
                s1[i]=s1[j];
            }
        }
    }
    //sort 2
    for(i=0;i<c2-1;i++){
        for(j=i+1;j<c2;j++){
            if(s2[i]>s2[j]){
                temp=s2[i];
                s2[i]=s2[j];
            }
        }
    }
    //compare
    int isAnagram=1
if(isAnagram){
    printf("\%s is anagram of \%s\"\n",str1,str2);
    else{
        printf("not anagram");
        }
        return 0;
}
