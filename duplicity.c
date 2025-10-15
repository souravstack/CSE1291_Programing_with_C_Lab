#include<stdio.h>
int main()
{
    int array[20],i,n,hasDuplicate=0,j;
    printf("enter the elements of array:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
         scanf("%d",&array[i]);
    }


    for(i=0;i<n;i++)
        {
        for(j=i+1;j<n;j++){
             if(array[i]==array[j])
           {
               hasDuplicate=1;
               break;
           }

       }
       if(hasDuplicate){
               break;
           }

    }

        if(hasDuplicate){
        printf("there are duplicate number in an array :%d\n");
    }

     else{
        printf("there are no duplicate number in an array \n");
    }
    }

    return 0;
}
