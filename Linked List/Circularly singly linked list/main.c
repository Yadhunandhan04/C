#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void inbegin()
{
    struct node *ptr,*temp;
    int element;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter Data : ");
        scanf("%d",&element);
        ptr->data=element;
        if(head==NULL)
        {
            head=ptr;
            ptr->next=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=head;
            ptr->next=ptr;
            head=ptr;
        }
        printf("\nSuccessfully Inserted");
    }
}
void inlast()
{
    struct node *ptr,*temp;
    int element;
    ptr=(struct node *)malloc(sizeof(struct node));
    if (ptr==NULL)
    {
       printf("\nOverflow"); 
    }
    else
    {
        printf("\nEnter Data : ");
        scanf("%d",&element);
        ptr->data=element;
        if(head==NULL)
        {
            head=ptr;
            ptr->next=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp->next=temp;
            }
            temp->next=ptr;
            ptr->next=head;
        }
        printf("\nSuccessfully Inserted");
    }
}
void delbegin()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("\nOverfolw");
    }
    else if(head->next==head)
    {
        head=NULL;
        free(head);
        printf("\nSuccessfully Deleted");
    }
    else
    {
        ptr=head;
        while(ptr->next!=head)
        {
            ptr->next=ptr;
        }
        ptr->next=head->next;
        free(head);
        head=ptr->next;
        printf("\nSuccessfully Deleted");
    }
}
void dellast()
{
    struct node *ptr, *preptr;
    if(head==NULL)
    {
        printf("\nOverflow");
    }
    else if(head->next==head)
    {
       head=NULL;
       free(head);
       printf("\nSuccessfully Deleted"); 
    }
    else
    {
        ptr=head;
        while(ptr->next!=head)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=ptr->next;
        free(ptr);
        printf("\nSuccessfully Deleted");
    }
}
void search()
{
    struct node *ptr;
    int element, i=0, flag=1;
    ptr=head;
    if(ptr==NULL)
    {
        printf("\nEmpty List");
    }
    else
    {
        printf("\nEnter element which you want to search : ");
        scanf("%d",&element);
        if(head->data==element)
        {
            printf("Element Founded : %d",i+1);
            flag=0;
        }
        else
        {
            while(ptr->next!=head)
            {
                if(ptr->data==element)
                {
                    printf("Element Founded : %d",i+1);
                    flag=0;
                    break;
                }
                else
                {
                    flag=1;
                }
                i++;
                ptr=ptr->next;
            }
        }
        if(flag!=0)
        {
            printf("Sorry! Element not found");
        }
    }
}
void display()
{
    struct node *ptr;
    ptr=head;
    if(head==NULL)
    {
        printf("\nBlank");
    }
    else
    {
        printf("\nDisplaying Elements");
        while(ptr->next!=head)
        {
            printf("\n%d",ptr->data);
            ptr=ptr->next;
        }
        printf("\n%d",ptr->data);
    }
}
void inbegin();
void inlast();
void delbegin();
void dellast();
void display();
void search();
void main()
{
    int choice=0;
    while(choice !=7)
    {
        printf("\nChoose options\n");
        printf("\n 1.Insert @ Beginning\n 2.Insert @ End\n 3.Delete @ Beginning\n 4.Delete @ End\n 5.Search\n 6.Display\n 7.Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            inbegin();
            break;
            case 2:
            inlast();
            break;
            case 3:
            delbegin();
            break;
            case 4:
            dellast();
            break;
            case 5:
            search();
            break;
            case 6:
            display();
            break;
            case 7:
            exit(0);
            break;
            default:
            printf("Enter valid choice :)");
        }
    }
}
