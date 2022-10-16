#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,sum=0;
    printf("enter elements of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf(" %d",a[i]);
        sum = sum + a[i];
    }
    printf("\n sum is %d",sum);
}
