#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

void main()
{
    struct student s;
    struct student *ptr = &s;
    printf("enter info for s:\n");
    scanf("%d %s %f",ptr->rollno,ptr->name,ptr->marks);
    
     printf("%d %s %f", ptr->rollno, ptr->name, ptr->marks);

    // printf("%d %s %f", s.rollno, s.name, s.marks);
}