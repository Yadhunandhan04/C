#include<stdio.h>
int main()
{
    int u1,u2;
    int v=3;
    int *pv;
    u1=2*(v+5);
    pv=&v;
    u2=2*(*pv+5);
    printf("%d\n%d",u1,u2);
}