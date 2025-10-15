#include<stdio.h>
int main()
{
    int i,num,count=0;
    printf("enter any number:");
    scanf("%d",&num);

    if(num<=1){
        count=1;
    }

    for(i=2;i<num;i++){
        count=0;
        if(num%i==0){
            count=1;
            break;
        }
    }
    if(count==0){
        printf("prime number");
    }
    else{
        printf("not prime number");
    }
    return 0;

}
