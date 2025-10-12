#include<stdio.h>

void calculatepower(double base,double exp)
{
    double result=1,i;
    for(i=0;i<=exp;i++)
    {
        result= result*base;
    }
    printf("%lf\n",result);
}


int main()
{

     double base ,exp;
     printf("enter base =");
     scanf("%lf",&base);

     printf("enter exponent =");
     scanf("%lf",&exp);



              calculatepower(2,5);

}

