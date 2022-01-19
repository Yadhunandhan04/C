#include<stdio.h>
struct employee
{
    int id,age,sal;
    char name[50];
}emp[50];
 
void main()
{
    int i,n;
    printf("\nNo of employees : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Name : ");
        scanf("%s",&emp[i].name);
        printf("Id : ");
        scanf("%x",&emp[i].id);
        printf("Age : ");
        scanf("%d",&emp[i].age);
        printf("Salary : ");
        scanf("%d",&emp[i].sal);
    }
    for(i=0;i<n;i++)
    {
        printf("\n\tEMPLOYEE DETAILS\t\n");
        printf("\nEmployee Name   : %s",emp[i].name);
        printf("\nEmployee ID     : %X",emp[i].id);
        printf("\nEmployee Age    : %d",emp[i].age);
        printf("\nEmployee Salary : %d",emp[i].sal);
        
    }
}