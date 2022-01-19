#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define TRUE  1
#define FALSE 0

typedef struct SLL
{
    int data;
    struct SLL *next;
}node;
node *create();
void main()
{
   int choice, val;
   char ans;
   node *head;
   void display(node *);
   node *search(node *,int);
   node *insert(node *);
   void dele(node **);
   head=NULL;
   do
   {
       
       printf("\n 1.Create");
       printf("\n 2.Display");
       printf("\n 3.search for an item");
       printf("\n 4.Insert an element in a list");
       printf("\n 5.Delete an element from list");
       printf("\n 6.Quit");
       printf("\n Enter yoru choice:");
       scanf("%d",&choice);
       switch(choice)
       {
          case 1:head = create();
               break;
          case 2:display(head);
               break;
          case 3:printf("enter the element to search");
                scanf("%d",&val);
          search(head,val);
               break;
          case 4:head=insert(head);
               break;
          case 5:dele(&head);
               break;
          case 6:exit(0);
                  printf("Invalid Choice,Try again");
       }
   }while(choice != 6);
}
node* create()
{
    node *temp,*new,*head;
    int val,flag;
    char ans = 'y';
    node *get_node();
    temp=NULL;
    flag = TRUE;
    do
    {
       printf("\n Enter the element :");
       scanf("%d",&val);
       new=get_node();
       if(new == NULL)
          printf("\n Memory is not allocated");
       new -> data = val;
       if (flag == TRUE)
       {
          head = new;
          temp = head;
          flag = FALSE;
       }
       else
       {
          temp ->next =new;
          temp = new;
       }
       printf("\n do you want to enter more elements?(y/n)");
       ans=getch();
    }while(ans == 'y');
    printf("\nThe Singly Linked List is created\n");
    getch();
    return head;
}
node *get_node()
{
    node *temp;
    temp=( node *)malloc(sizeof(node));
    temp->next=NULL;
    return temp;
}
void display(node *head)
{
    node *temp;
    temp = head;
    if(temp == NULL)
    {
        printf("\nThe list is empty\n");
        getch();
        return;
    }
    while (temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp-> next;
    }
    printf("NULL");
    getch();
}
node *search(node *head,int key)
{
    node *temp;
    int found;
    temp = head;
    found = FALSE;
    while (temp !=NULL && found == FALSE)
    {
        if(temp->data != key)
           temp = temp-> next;
        else
           found = TRUE;
    }
    if(found == TRUE)
    {
        printf("\nThe Element is present in the list\n");
        getch();
        return NULL;
    }
    else
    {
        printf("\nThe element is not present in the list\n");
        getch();
        return NULL;
    }
}
node *insert(node *head)
{
    int choice;
    node *insert_head(node *);
    void insert_after(node *);
    void insert_last(node *);
    printf("\n 1.Insert a node as a head node ");
    printf("\n 2.Insert a node as a last node");
    printf("\n 3.Insert a node at intermediate position in the linked list");
    printf("\n Enter your choice for insertion of node");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:head=insert_head(head);
             break;
        case 2:insert_last(head);
             break;
        case 3:insert_after(head);
             break;
    }
    return head;
}
node *insert_head(node *head)
{
    node *new,*temp;
    new=get_node();
    printf("\n Enter the element which you want to insert");
    scanf("%d",&new->data);
    if(head == NULL)
       head=new;
    else 
    {
       temp=head;
       new->next=temp;
       head=new;
    }
    return head;
}
void insert_last(node *head)
{
    node *new,*temp;
    new=get_node();
    printf("\n Enter the element ");
    scanf("%d",&new->data);
    if(head == NULL)
       head=new;
    else
    {
        temp=head;
        while(temp->next!=NULL)
          temp=temp->next;
        temp->next=new;
        new->next=NULL;
    }
}
void insert_after(node *head)
{
    int key;
    node *new,*temp;
    new=get_node();
    printf("\n Enter the element ");
    scanf("%d",&new->data);
    if(head == NULL)
    {
        head=new;
    }
    else
    {
        printf("\n Enter the element which you want to insert the node");
        scanf("%d",&key);
          temp=head;
        do
        {
           if(temp->data==key)
           {
               new->next=temp->next;
               temp->next=new;
               return;
           }
           else
               temp=temp->next;
        }while(temp !=NULL);
    }
}
node* get_prev(node *head,int val)
{
    node *temp,*prev;
    int flag;
    temp=head;
    if(temp == NULL)
       return NULL;
    flag= FALSE;
    prev= NULL;
    while(temp != NULL &&  !flag)
    {
        if(temp->data != val)
        {
            prev = temp;
            temp = temp->next;
        }
        else
            flag=TRUE;
    }
    if(flag)
          return prev;
    else
          return NULL;
}
void dele(node **head)
{
    node *temp,*prev;
    int key;
    temp = *head;
    if(temp == NULL)
    {
        printf("\nThe list is empty\n");
        getch();
        return;
    }
    printf("\n Enter the element you want to delete ");
    scanf("%d",&key);
    temp=search(*head,key);
    if(temp != NULL)
    {
        prev = get_prev(*head,key);
        if(prev !=NULL)
        {
            prev->next=temp->next;
            free(temp);
        }
        else
        {
            *head = temp->next;
            free(temp);
        }
        printf("\nThe element is deleted\n");
    }
}