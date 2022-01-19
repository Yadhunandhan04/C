#include<stdio.h>
#define size 3
int arr[size];
int front=0;
int rear=0;
int empty()
{
    if(front==rear)
       return 1;
    return 0;
}
void deq()
{
    if(empty()==1)
       printf("\nQueue is empty");
    else
       printf("\nDequeued element=%d",arr[front]);
       front++;
}
int full()
{
    if(rear==size)
        return 1;
    return 0;
}
int enq(int val)
{
    if(full()==1)
        printf("\nQueue is full");
    else
        arr[rear]=val;
        rear++;
}
int main()
{
    enq(1);
    enq(2);
    enq(3);
    deq();
    deq();
    deq();
    return 0;
}