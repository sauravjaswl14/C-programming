#include<stdio.h>
void main()                                               //[2,5,6,8,10]
{
    int a[50],size,i,pos,num;
    printf("enter size of array:");
    scanf("%d",&size);
    if(size>50)
    {
        printf("overflow!!");
    }
    else{
        printf("enter elements of array:");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("from which position u want to insert an element:");
        scanf("%d",&pos);
        printf("enter number you want to insert:");
        scanf("%d",&num);
        for(i=size-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=num;
        size++;
        printf("new array is:");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
    }
}