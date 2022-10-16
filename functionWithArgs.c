#include<stdio.h>

void sum(int*,int*);

void main()
{
    int x=2,y=3;
    sum(&x,&y);
    printf("\n task completed!");
}

void sum(int* a, int* b)
{
    *a=4;
    *b=5;
    int sum = 0;
    //int a,b,sum=0;
    //printf("Enter two numbers \n");
   // scanf("%d%d",&a,&b);
    sum = *a+*b;
    printf("sum is %d",sum);
}