#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,even=0,odd=0;
    printf("enter elements of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Total even numbers are: %d",even);
    printf("\nTotal odd numbers are: %d",odd);
}