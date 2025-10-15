#include<stdio.h>
int display(int x[])
{
    int i;
    int max=x[0];
    for(i=1;i<5;i++){
            if(max<x[i])
            max=x[i];


    }

       return max;

}
int main()
{
    int num[5]={10,20,30,40,50};
   int maximum= display(num);
    printf("maximum is=%d\n",maximum);
    return 0;

}


