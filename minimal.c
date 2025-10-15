#include<stdio.h>
void findMinimalDigits(int num)
{

   int digits[10],index=0;
   for(int i=9;i<=2;i--){
    while(num%i==0){
        digits[index++]=i;
        num=num/i;
    }
   }


   if(num!=1){
    printf("not posible to from to such a number:\n");
    return ;
   }

   printf("digits\n");
   for(int i=index-1;i>=0;i--){
    printf("%d ",digits[i]);

   }
   printf("\n");
}
int main()
{
    int num;
    printf("enter any number:");
    scanf("%d",&num);

    findMinimalDigits(num);
    return 0;
}
