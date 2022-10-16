#include<stdio.h>
int main()
{
    int a=10;
    int *p = &a;
    int **q = &p;
    printf("a = %d\n",a);
    printf("a = %d\n",*p);//value at address of a
    printf("a = %d",**q);//value at address of pointer p
}