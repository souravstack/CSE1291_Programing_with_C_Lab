#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr1,*ptr2;
      ptr1=(int*)malloc(5*sizeof(int));
      ptr2=(int*)calloc(5,sizeof(int));
   if(ptr1==NULL || ptr2==NULL){
    printf("memory not allocated");
   }
   else{
    printf("memory allocation succesfull\n");
    ptr1=realloc(ptr1,50);
    printf("memory reallocation succesfull\n");
   }


}

