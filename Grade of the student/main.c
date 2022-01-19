#include <stdio.h>
int main()
{
    char a[15];
    int m1,m2,m3,m4,m5,tot;
    float avg;
    printf("Enter your name : ");
    scanf("%s",&a);
    printf("Subject 1: ");
    scanf("%d",&m1);
    printf("Subject 2: ");
    scanf("%d",&m2);
    printf("Subject 3: ");
    scanf("%d",&m3);
    printf("Subject 4: ");
    scanf("%d",&m4);
    printf("Subject 5: ");
    scanf("%d",&m5);
    tot=m1+m2+m3+m4+m5;
    avg=tot/5;
    printf("\nTotal : %d",tot);
    printf("\nAverage : %f",avg);
    if(avg>=90&&avg<=100)
    {
        printf("\nGrade A");
    }
    else if(avg>=70&&avg<90)
    {
        printf("\nGRADE B");
    }
    else if(avg>=50&&avg<70)
    {
        printf("\nGRADE C");
    }
    else
    {
        printf("\nFAIL");
    }
    return 0;
}
