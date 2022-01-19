#include <stdio.h>
int main()
{
    char a[15];
    int m1,m2,m3,m4,m5,tot;
    float avg;
    printf("Enter your name : ");
    scanf("%s",&a);
    printf("Sub 1: ");
    scanf("%d",&m1);
    printf("Sub 2: ");
    scanf("%d",&m2);
    printf("Sub 3: ");
    scanf("%d",&m3);
    printf("Sub 4: ");
    scanf("%d",&m4);
    printf("Sub 5: ");
    scanf("%d",&m5);
    tot=m1+m2+m3+m4+m5;
    avg=tot/5;
    printf("\nTotal : %d",tot);
    printf("\nAverage : %f",avg);
    if(avg>=90&&avg<=100)
    {
        printf("\n A GRADE");
    }
    else if(avg>=70&&avg<90)
    {
        printf("\n B GRADE");
    }
    else if(avg>=50&&avg<70)
    {
        printf("\n C GRADE");
    }
    else
    {
        printf("\n FAIL");
    }
    getch();
    return 0;
}
