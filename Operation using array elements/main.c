#include<stdio.h>
void main()
{
    int a[21]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int n,n1;
    printf("Enter Numbers Between 0 to 20 : ");
    scanf("%d %d",&n,&n1);
    printf("\nAddition       : %d",*(a+n)+*(a+n1));
    printf("\nSubtraction    : %d",*(a+n)-*(a+n1));
    printf("\nMultiplication : %d",*(a+n) * *(a+n1));
    printf("\nDivision       : %d",*(a+n) / *(a+n1));
}