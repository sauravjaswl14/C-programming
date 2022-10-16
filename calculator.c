#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,sum,sub,mul,div;
    char optr;
    printf("enter a operator: ");
    scanf("%c",&optr);
    printf("enter two operands: ");
    scanf("%d%d",&a,&b);
    switch(optr)
    {
        case '+': sum=a+b;
                printf("Sum is: %d",sum);
                break;
        case '-': sub=a-b;
                printf("Difference is: %d",sub);
                break;
        case '*': mul=a*b;
                printf("product is: %d",mul);
                break;
        case '/': div= a/b;
                printf("division: %d",div);
                break;
        default: printf("\n enter valid character");
    }
    printf("\n End of program!!");
}