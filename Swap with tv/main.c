#include <stdio.h>
int main()
{
    int a,b,temp;
    a=10;
    printf("\nBefore swap a : %d",a);
    b=20;
    printf("\nBefore swap b : %d",b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swap a : %d",a);
    printf("\nAfter swap b : %d",b);
    return 0;
}
