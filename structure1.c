#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
}s3;

void main()
{
    struct student s1 = {1,"saurav",98};
    struct student s2;
    s2=s1;

    s3.rollno=4;
    s3.name[20]="vaibhav";
    s3.marks=90;
    // printf("enter info. for s2:");
    // scanf("\n%d %s %f",&s2.rollno,s2.name,&s2.marks);
    printf("\ninfo of s1");
    printf("\n%d %s %f",s1.rollno,s1.name,s1.marks);

    printf("\ninfo of s2");
    printf("\n%d %s %f",s2.rollno,s2.name,s2.marks);

    printf("\ninfo of s3");
    printf("\n%d %s %f",s3.rollno,s3.name,s3.marks);
}