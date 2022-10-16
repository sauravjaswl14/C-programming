//pass an array of marks as argument and calculate the average.

#include<stdio.h>

float average(int[],int);

void main()
{
    float avg;
    int size;
    int marks[5] = {10,20,20,40,50};
    size = sizeof(marks)/sizeof(marks[0]);
    avg = average(marks,size);
    printf("Average is %f",avg);

}

float average(int marks1[],int a)
{
    int i, sum=0;
    float average=0;
    for(i=0;i<a;i++)
    {
        sum = sum + marks1[i]; 
    }
    average = sum/a;
    return average;

}

