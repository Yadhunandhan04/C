#include <stdio.h>
void revstr();
int main() 
{
    printf("Enter a String : ");
    revstr();
    return 0;
}
void revstr() 
{
    char a;
    scanf("%c",&a);
    if (a!='\n') 
    {
        revstr();
        printf("%c",a);
    }
}