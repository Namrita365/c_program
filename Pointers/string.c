#include<stdio.h>
int main()
{
    char str[]="Namrita";
    char *p=str;
    while(*p!='\0')
    {
        printf("%c",*p);
        p++;
    }
    return 0;
}