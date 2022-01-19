#include<stdio.h>
void main()
{
    int a,i,n;
    printf("\nEnter any number : ");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        n=a*i;
        printf("\n%d",n);
    }
}    