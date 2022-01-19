#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL, *rear=NULL;
void enq(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=NULL;
    if(front==NULL&&rear==NULL)
       front=rear=newNode;
    else
    {
        rear->next=newNode;
        rear=newNode;
    }
}
void deq()
{
    struct node *temp;
    if(front==NULL)
       printf("Queue is empty");
    else
       temp=front;
       front=front->next;
       if(front==NULL)
           rear=NULL;
        free(temp);
}
void print()
{
    struct node *temp=front;
    while(temp)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("\nNULL");
}
int main()
{
    enq(1);
    enq(2);
    enq(3);
    printf("Queue : ");
    deq();
    printf("After Dequeued : ");
    print();
    deq();
    printf("After Dequeued : ");
    print();
}