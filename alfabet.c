#include<stdio.h>
int main()
{
    char str[27];
    int i;
    char *ptr=str;
    for(i=0;i<26;i++){
        *ptr='A'+i;
        *ptr++;
    }

    ptr=str;
    //print all alfabet
    for(i=0;i<26;i++)
    {
        printf("%c ",*(ptr+i));
    }
}
