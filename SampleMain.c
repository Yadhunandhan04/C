#include<stdio.h>
# define N 5
int queue[N];
int front=-1;
int rear=-1;
int X;
scanf("\n%d",X);
void enque(int X)
{
    if(rear==N-1)
    {
        printf("\n Queue is full");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=X;
    }
    else
    {
        rear++;
        queue[rear]=X;
    }
    
}
void deque()
{
    if(rear==-1 && front==-1)
    {
        printf("\n queue is empty");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("\n%d",queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if(rear==-1 && front==-1)
    {
        printf("\n queue is empty");
    }
    else 
    {
        for(i=front;i<rear+1;i++)
        {
            printf("\n%d",queue[i]);
        }
    }
}
void peek()
{
    if(rear==-1 && front==-1)
    {
        printf("\n queue is empty");
    }
    else
    {
        printf("\n%d",queue[front]);
    }
}
