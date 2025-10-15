#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    int *ptr;
    scanf("%d",&n);

    ptr=(int*)calloc(5,sizeof(int));
    if(ptr==NULL){
        printf("memory has no allocate.");
        exit(1);
    }

    printf("store the n array element:\n");
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("maximum value of this pointer:\n");


    int max=ptr[0];
    for(i=0;i<n;i++){
        if (*(ptr+i)>max);
        max=*(ptr+i);
    }


        printf("%d",max);
        return 0;
}



