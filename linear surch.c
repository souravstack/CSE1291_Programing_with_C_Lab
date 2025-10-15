//how to find linear suarch
#include<stdio.h>
int main()
{
    int num[]={12,3,14,15,8,9,13,11};
    int value,pos=-1,i;
    printf("enter the numbers that you want to suarch=");
    scanf("%d",&value);

    for(i=0;i<9;i++)
    {
        if(value==num[i])

        {
            pos=i+1;
            break;
        }
    }

    if(pos==-1)
    {
        printf("Value not found");

    }

    else

     {
         printf("the value is found position at %d/n",pos);
     }

}


