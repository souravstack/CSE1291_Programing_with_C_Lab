#include<stdio.h>
int main()
{
    char str[100];
    char *ptr=str;
    int ctrV=0,ctrC=0;

    printf("enter the string name:");
    scanf("%s",str);

   while(*ptr!='\0'){
    if(*ptr='a' || *ptr='e' || *ptr='i' || *ptr='o' || *ptr='u'||
    *ptr='A' || *ptr='E' || *ptr='I' || *ptr='O' || *ptr='U')
   {
     ctrV++;
   }

   else{
    ctrC++;
   }
   *ptr++;
}
   printf("%d",ctrV);
   printf("%d",ctrC);
   return 0;
}
