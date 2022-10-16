#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is largest");
        }
   
    }
     if(b>a){
        if(b>c)
        {
            printf("b is largest");
        }
      
    }
    if(c>a)
    {
        if(c>b)
        {
            printf("c is largest");
        }
     
    }
    getch();
}