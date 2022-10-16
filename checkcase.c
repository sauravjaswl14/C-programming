#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("enter a character or a number");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("Uppercase character");
    }
    else if(ch>='a'&& ch<='z')
    {
        printf("lowercase character");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("number");
    }
    else
    {
        printf("invalid input");
    }
   printf("\n end of program"); 
}