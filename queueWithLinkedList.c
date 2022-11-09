#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;

void enqueue()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to be inserted in queue");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(front==0 && rear==0)
    {
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue()
{
    struct node *temp;
    temp=front;
    if(front==0 && rear==0)
    {
        printf("queue is empty");
    }
    else if(front==rear)
    {
        front=rear=0;
        free(temp);
    }
    else{
        printf("dequeued element is: %d",front->data);
        front=front->next;
        free(temp);
    }

}

void display()
{
    struct node *temp;
    if(front==0 && rear==0)
    {
        printf("queue is empty");
    }
    else{
        temp=front;
        printf("\nqueue is:");
        while(temp!=0)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}

void peek()
{
    if(front==0 && rear==0)
    {
        printf("queue is empty");
    }
    else{
        printf("top element is: %d",front->data);
    }
}

void main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    display();
    dequeue();
    display();
}