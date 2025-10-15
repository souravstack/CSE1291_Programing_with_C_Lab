//Explain the output of the following program

#include <stdio.h>

#include <string.h>

int main()
{
    char* string1= NULL;

   char* string2=0;

   strcpy(string1,"green");

   strcpy(string2,"color");

   printf("%s %s\n",string1, string2);

   return 0;

}
