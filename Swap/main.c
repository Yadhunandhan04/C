#include<stdio.h>
void swap(int &a, int &b)
{
    int c=b; 
    b=a; 
    a=c;
    printf("\nAfter Swapping : %d %d",a,b);   
}
void main()
{
    int a,b;
    printf("Enter First number : ");
    scanf("%d",&a);
    printf("Enter Second number : ");
    scanf("%d",&b);
    printf("\nValue before swap : %d %d",a,b);
    swap(a,b);
}