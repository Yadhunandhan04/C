#include <stdio.h>
#include <string.h>
int main()
{
  char a[50], b[50];
  printf("\nEnter a string to check if it's a palindrome : ");
  gets(a);
  strcpy(b,a);  
  strrev(b);  
  if(strcmp(a,b) == 0)  
    printf("\nIts Palindrome");
  else
    printf("\nIts not a Palindrome");
  return 0;
}