#include<stdio.h>
#include <stdlib.h>
void main()
{
int n;
printf("\nEnter the size of an elements : ");
scanf("%d",&n);
int a[n];
printf("\nEnter the elements now : \n");
for(int i=0;i<n;i++)
scanf("\n%d",&a[i]);
printf("\n%d",a[1]);
for(int i=1;i<n-1;i++)
printf(" %d ",a[i-1]+a[i+1]);
printf(" %d ",a[n-2]);
}