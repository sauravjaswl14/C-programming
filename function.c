#include<stdio.h>

// void sum();

char displayChar();

void main()
{
    char ch;
    ch = displayChar();
    printf("Hello \n");
    printf("%c",ch);
}
 /*void sum()
 {
    int a, b, sum=0;
    printf("enter two numbers \n");
    scanf("%d %d",&a,&b);
    sum = a+b;
    printf("sum is = %d",sum);
 }*/

 char displayChar()
 {
    char c;
    printf("enter a character \n");
    scanf("%c",&c);
    return 'c';

 }