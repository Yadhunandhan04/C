#include <stdio.h>
void main()
{
  int a;
  int *poi;
  a = 10;
  poi = &a;
  printf("\nValue of A     = %d",a);
  printf("\nAddress of A   = %X",&a);
  printf("\nAddress of poi = %X",&poi);
  printf("\nValue of poi   = %X",poi);
}