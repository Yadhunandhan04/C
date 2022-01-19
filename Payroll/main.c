#include<stdio.h>
struct employee
{
    char empid[20],name[10];
    int bp,al,ded,np;
}emp[10];
void main()
{
    int i,a;
    printf("Enter the number of employees : ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("\nEnter the employee id : ");
        scanf("%x",&emp[i].empid);
        printf("\nEnter the name : ");
        scanf("%s",&emp[i].name);
        printf("\nEnter the Basic Pay : ");
        scanf("%d",&emp[i].bp);
        printf("\nEnter the Allowance : ");
        scanf("%d",&emp[i].al);
        printf("\nEnter the Deductions : ");
        scanf("%d",&emp[i].ded);
        emp[i].np = emp[i].bp + emp[i].al - emp[i].ded;
    }
    for(i=0;i<a;i++)
    {
    printf("*******************************");
    printf("\nEmp id     : %d",emp[i].empid);
    printf("\nName       : %d",emp[i].name);
    printf("\nBasic Pay  : %d",emp[i].bp);
    printf("\nAllowance  : %d",emp[i].al);
    printf("\nDeductions : %d",emp[i].ded);
    printf("\nNet Pay    : %d",emp[i].np);
    printf("\n*******************************");
    }
}