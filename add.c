#include<stdio.h>
#include<conio.h>
void main()
{
    int x=10,y;
    y = x++;
    printf("%d \n",x);
    printf("%d",y);
}
/*
 x=10 y=0
 x= 11,y=11 -> preincrement
 y=10, x=11 ->postincrement
*/