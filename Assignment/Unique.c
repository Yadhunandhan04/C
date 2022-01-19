#include <stdio.h>
void main()
{
	int n;
	printf("Enter array size : ");
	scanf("%d", &n);
	int a[n];
	printf("Enter %d numbers : ", n);
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	int temp = a[0];
	for(int i=1; i<n; i++)
	{
		temp = temp ^ a[i];
	}
	printf("Unique element in the array is: %d", temp);
}