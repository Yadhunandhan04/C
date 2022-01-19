#include<stdio.h>
void main()
{
    int n;
    int i=1;
    int j=1;
    printf("\n Enter The Number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        j=j*i;
        printf("\n%d",j);
        i++;
    }
}