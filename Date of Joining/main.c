#include<stdio.h>  
struct doj   
{  
    char month[20];  
    int year,date;  
};  
struct employee 
{  
    char name[20];
    int id;  
    struct doj main;  
};
void main ()  
{  
    int i,n;
    printf("\nNo of employees : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    struct employee emp;  
    printf("\nName : ");  
    scanf("%s",&emp.name);
    printf("\nID : ");  
    scanf("%X",&emp.id);
    printf("\nYear Of Join");
    printf("\nDate : ");  
    scanf("%d",&emp.main.date);
    printf("\nMonth In Words : ");  
    scanf("%s",&emp.main.month);
    printf("\nYear : ");  
    scanf("%d",&emp.main.year);  
    }
}  