#include <stdio.h>

int main() {
    int n,sum=0;

    printf("enter n:");
    scanf("%d",&n);

    int array[n];
    int *p=&array[0];


    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++){
        sum=sum+*(p+i);
    }

    printf("sum=%d",sum);
    return 0;
}
