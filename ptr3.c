/*write down the output of the following program.(assume that the base address
                                               of x is 166 and the address of p is 176)*/
#include<stdio.h>
int main()
{
    int *p,sum,i;
    int x[5]={5,9,6,3,7};
    i=0;p=x;
    printf("Element value address\n");
    while(i<5){
        printf("x[%d] %d %u\n",i,*p,p);
        sum=sum+*p;
        i++,p++;
    }
    printf("\nsum=%d\n",sum);
    printf("\n&x[0]=%u\n",&x[0]);
    printf("\np=%u\n",p);

}
