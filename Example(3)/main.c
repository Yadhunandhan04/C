#include<stdio.h>
void main()
{
    int a=-1,b=2,c=0;
    if(++a,b,++c)
        printf("%d,%d,%d",a,b,c);
}
