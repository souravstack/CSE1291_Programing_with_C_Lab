#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);

    if((a>b && b>c) || (c>b && b>a)){
        printf("the second largest value is b =%d\n",b);
    }

    else if((b>a && a>c) || (c>a && a>b)){
        printf("the second largest value is a =%d\n",a);
    }

    else{
        printf(" the second largest value is c =%d\n",c);
    }

}
