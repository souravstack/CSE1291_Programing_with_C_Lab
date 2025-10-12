#include<stdio.h>
int main ()
{
    double area, radius;
    printf("enter radius:");
    scanf("%lf",&radius);

    area=3.1416*radius*radius;
    printf("the area is =%lf\n",area);
    return 0;
}
