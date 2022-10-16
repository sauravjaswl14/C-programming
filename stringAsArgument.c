//pass string as argument and calculate the length

#include<stdio.h>

void display(char[]);

void main()
{   
    int len;
    char name[] = "saurav";
    display(name);
    //printf("length of given string is %d",len);
}

void display(char str[])
{
    int i, length=0;
    for(i=0;str[i]!='\0';i++)
    {
        length = length + 1;
    }
    printf("length is %d",length);
}