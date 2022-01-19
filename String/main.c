#include<stdio.h>
#include<string.h>
void main()
{
    char st1[10] = "Skcet", st2[15] = "Coimbatore", a[5];
    printf("\nA.String concadination \nB.String compare\nC.String length\nD.String copy\nSelect Anyone : ");
    scanf("%s",&a);
    if(strcmp(a,"A")==0)
    {
        printf("The Given String is : %s, %s",st1,st2);
        printf("\nString concatination : ");
        strcat(st1,st2);
        printf("%s, %s",st1,st2);
    }
    else if(strcmp(a,"B")==0)
    {
        printf("The Given String is : %s, %s",st1,st2);
        if(strcmp(st1,st2))
            printf("\nBoth string are different");
        else
            printf("\nBoth strings are same");
    }
    else if(strcmp(a,"C")==0)
    {
        printf("The Given String is : %s, %s",st1,st2);
        printf("\nLength of Skcet is : %ld",strlen(st1));
        printf("\nLength of Coimbatore is : %ld",strlen(st2));
    }
    else if(strcmp(a,"D")==0)
    {
        printf("The Given String is : %s, %s",st1,st2);
        printf("\nString copy : ");
        strcpy(st1,st2);
        printf("%s, %s",st1,st2);
    }
    else
        printf("\nYour option is wrong");
}