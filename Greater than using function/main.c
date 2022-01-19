#include <stdio.h>
int func(int,int);
int main()
{
   int a,b;
   printf("\nEnter any number : ");
   scanf("%d",&a);
   printf("\nEnter any number : ");
   scanf("%d",&b);
   func(a,b);
}
func(int a,int b)
{
   if(a>b)
      printf("%d is Greater",a);
   else
      printf("%d is Greater",b);
}
