#include <stdio.h>
int main()
{
    int a,b;
    a=10;
    printf("\nBefore swap a : %d",a);
    b=20;
    printf("\nBefore swap b : %d",b);
    a,b = b,a;
    printf("\nAfter swap a : %d",b);
    printf("\nAfter swap b : %d",a);
    return 0;
}
