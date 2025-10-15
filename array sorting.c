#include<stdio.h>
int main()
{
    int array[50],num,i,j,temp;
    printf("enter the elements of array:\n");
    scanf("%d",&num);

    printf("Enter elements:\n");
    for(i=0;i<num;i++){
        scanf("%d",&array[i]);
    }

    for(i=0;i<num-1;i++){
        for(j=0;j<num-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

    for(i=0;i<num;i++){

            printf("%d ",array[i]);

    }


}
