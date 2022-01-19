#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    char b[10];
    printf("Enter User Name : ");
    scanf("%s",a);
    printf("Enter Pass Code : ");
    scanf("%s",b);
    if(strcmp(a, "Jason") == 0)
    {
        if(strcmp(b, "Martha" ) == 0)
           printf("\nLogin Successfull");
        else
           printf("\nPass Code is incorrect");
    }
    else
       printf("\nUser Name incorrect");
    return 0;
}
