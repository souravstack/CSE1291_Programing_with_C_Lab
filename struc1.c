#include<stdio.h>
int main()
{
    struct product
    {
        int id;
        char name[50];
        char catagory[50];
        float prise;
        int quantity;
    };
    // declare and initialisation structure variable
    struct product products[3];
    for(int i=0;i<3;i++)
    {
      printf("products.id=");
      scanf("%d",&products[i].id);

       printf("products.name=");
      scanf("%s",&products[i].name);

        printf("products.catagory=");
      scanf("%s",&products[i].catagory);

        printf("products.prise=");
      scanf("%f",&products[i].prise);

        printf("products.quantity=");
      scanf("%d",&products[i].quantity);

      printf("\n\n");

    };


    for(int i=0;i<5;i++){
    printf("%d\n",products[i].id);
    printf("%s\n",products[i].name);
    printf("%s\n",products[i].catagory);
    printf("%f\n",products[i].prise);
    printf("%d\n\n",products[i].quantity);
    }


}
