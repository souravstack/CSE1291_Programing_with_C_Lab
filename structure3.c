#include<stdio.h>


struct student {
    char name[50];
    int roll;
    float marks[3];

};

int main() {
    struct student s[3];
    for(int i=0;i<3;i++){
        printf("enter name of student %d:",(i+1));
        scanf("%s",&s[i].name);
         printf("enter roll of student %d:",(i+1));
        scanf("%d",&s[i].roll);
         printf("enter marks of 3 subject for student %d:",(i+1));
        for(int j=0;j<3;j++){
            scanf("%f",&s[i].marks[j]);
        }
    }

   for(int i=0;i<3;i++){
       int sum =0;
       for(int j=0;j<3;j++){
            sum=sum+s[i].marks[j];
        }
        float average=(float)sum/3;

        printf("%s %d %f\n",s[i].name,s[i].roll,average);
    }


    return 0;
}
