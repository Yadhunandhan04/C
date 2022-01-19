#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("\nEnter any number : ");
    scanf("%d",&a);
    for(b=1;b<=a;b+=2)
        sum+=b;
    printf("\nThe sum of  given odd numbers are : %d",sum);
}