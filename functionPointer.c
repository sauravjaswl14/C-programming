#include<stdio.h>

int sum(int,int);

void main()
{
    int s=0;
    int (*ptr)(int,int)=&sum;//pointer to a function sum
    s=(*ptr)(4,5);
    printf("sum=%d",s);
}

int sum(int a, int b)
{
    return a+b;
}