#include <stdio.h>
int main()
{
    int a,b;
    printf("\nEnter a value for A : ");
    scanf("%d",&a);
    printf("\nEnter a value for B : ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("\nA is greater than B");
    }
    else
    {
        printf("\nB is greater than A");
    }
    return 0;
}

