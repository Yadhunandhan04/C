#include<stdio.h>
int main()
{
    int a;
    printf("\nType any number to check odd or even : ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("\nThe given number is even");
    }
    else
    {
        printf("\nThe given number is odd");
    }
    return 0;
}
