#include<stdio.h>
void main()
{
   int n,i,sum=0,*ptr;
   int arr[100];
   printf("Enter array size : ");
	scanf("%d", &n);
	int a[n];
   printf("\nEnter %d elements\n",n);
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
   ptr = arr;
   for(i=0;i<n;i++) 
   {
      sum = sum + *ptr;
      ptr++;
   }
   printf("\nThe sum is: %d",sum);
}