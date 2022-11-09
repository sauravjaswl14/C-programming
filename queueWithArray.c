#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue()
{
    int x;
    printf("\nEnter element to be inserted in queue: ");
    scanf("%d",&x);
    if(rear==N-1)
    {
        printf("overflow!!");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("underflow");
    }
   else if(front==rear)
    {
        front=rear=-1;
    }
    else{
        printf("\ndequeued element is: %d",queue[front]);
        front++;
    }
}

void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    printf("\n queue is:");
    for(i=front;i<rear+1;i++)
    {
        printf("%d\t",queue[i]);
    }
}

void main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    display();
}