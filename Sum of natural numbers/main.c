#include <stdio.h>
void main()
{
    int a,b,c=0;
    printf("Enter any number : ");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
      c+=b;
    }
    printf("%d",c); 
}