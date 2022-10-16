#include<stdio.h>
void main()
{
    int a[50],i,size;
    printf("enter size of array");
    scanf("%d",&size);
    if(size>50)
    {
        printf("overflow");

    }
    else{
        printf("\nenter elements of array:");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("\nelements of array are:");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
    }
}