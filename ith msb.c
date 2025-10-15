#include<stdio.h>
int main()
{
    int i,num,rem,m;
    printf("enter any integer:");
    scanf("%d",&num);
    printf("enter ith msb:");
    scanf("%d",&m);

    for(i=12;i<=m;i++){
        rem=num%10;
        num=num/10;
    }
    if(num!=0 || rem!=0){
        printf("%d",rem);
    }
    else{
        printf("sorry,doesn't esist");
    }
    return 0;
}
