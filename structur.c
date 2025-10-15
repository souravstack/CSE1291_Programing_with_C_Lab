
#include <stdio.h>

// Global structure
struct person
 {
    int age;
    char name[50];
    float salary;
};

int main() {
    // local structure
    struct  person person[4];
    int i;

    for(i=0;i<4;i++)
    {
        printf("\nEnter information for person :%d\n",i+1);
        printf("enter name=");
        fflush(stdin);
        gets(person[i].name);


        printf("enter age =");
        scanf("%d",&person[i].age);

        printf("enter salary =");
        scanf("%f",&person[i].salary);

   }

       for(i=0;i<4;i++){
        printf("\n \nEnter information for person :%d\n",i+1);
        printf("Name=%s\n",person[i].name);
        printf("enter age =%d\n",person[i].age);
        printf("enter salary =%f\n",person[i].salary);

       }


    return 0;
}
