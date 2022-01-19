#include<stdio.h>
void main() 
{
    int n=5;
    int i,j,s;
    printf("\n");
    for(i=1;i<=n;i++)
    {   
        for(s=0;s<=n-i;s++)
        {
            printf("   ");
        }
        for(j=1;j<=i*2-1;j++)
        {
            if (j==1||(j==i*2-1)||i==n)
            {
                printf(" @ ");
            }
            else
            {
                printf("   ");            
            }            
        }               
    printf("\n");
    }
}