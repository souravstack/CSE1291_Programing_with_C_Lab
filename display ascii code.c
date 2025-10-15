#include<stdio.h>
int main()
{
    char letter;
    printf("enter any letter:");
    scanf("%c",&letter);

    char next_letter = letter + 1;

    printf("the ascii value %c is =%d\n",letter,letter);
    printf("the next letter is =%c\n",next_letter);
    printf("the ASCII value of next letter is =%d\n",next_letter);

    return 0;

}
