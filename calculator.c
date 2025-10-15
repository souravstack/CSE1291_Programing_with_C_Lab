#include<stdio.h>
int main()
{
    char operator;
    double first,second;
    printf("Enter any operator(+,-,*,/):");
    scanf("%c",&operator);

    printf("enter two number two number one by one:");
    scanf("%lf %lf",&first,&second);

    switch(operator)
    {
    case '+':
        printf("%lf + %lf = %lf",first,second,(first+second));
        break;

        case '-':
        printf("%lf - %lf = %lf",first,second,(first-second));
        break;

        case '*':
        printf("%lf * %lf = %lf",first,second,(first*second));
        break;

        case '/':
            if(second!=0){
                printf("%lf / %lf = %lf",first,second,(first/second));
            }
            else{
                printf("This is zero situation");
            }

        break;

        default:
            {
                printf("Invalid operator");
            }

    }
    return 0;
}
