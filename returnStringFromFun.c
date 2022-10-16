//Display the string returned from a function
#include<stdio.h>

char* display();

void main()
{
    char* str;
    str = display();
    printf("the string is %s",str);
}

char* display()
{
   static char name[]="saurav";
    return name;
}

