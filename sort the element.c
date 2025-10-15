#include<stdio.h>
int main ()
{
    int array[5],i,j,temp,n,flag=0;

    printf("enter n number=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n-1;i++){
            flag=0;
        for(j=0;j<n-1-i;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                flag=1;
            }

        }
        if(flag==0)
            break;

    }
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }

    return 0;
}

