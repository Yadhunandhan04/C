#include <stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,tot;
    printf("\n Marks Obtained in Subject 1:");
    scanf("%d",&s1);
    if((s1>=90) && (s1<=100))
    {
        printf("\n A GRADE");
    }
    else if((s1>=70) && (s1<90))
    {
        printf("\n B GRADE");
    }
    else if((s1>=50) && (s1<70))
    {
        printf("\n C GRADE");
    }
    else
    {
        printf("\n FAIL");
    }
    printf("\n Marks Obtained in Subject 2:");
    scanf("%d",&s2);
    if((s2>=90) && (s2<=100))
    {
        printf("\n A GRADE");
    }
    else if((s2>=70) && (s2<90))
    {
        printf("\n B GRADE");
    }
    else if((s2>=50) && (s2<70))
    {
        printf("\n C GRADE");
    }
    else
    {
        printf("\n FAIL");
    }
    printf("\n Marks Obtained in Subject 3:");
    scanf("%d",&s3);
    if((s3>=90) && (s3<=100))
    {
        printf("\n A GRADE");
    }
    else if((s3>=70) && (s3<90))
    {
        printf("\n B GRADE");
    }
    else if((s3>=50) && (s3<70))
    {
        printf("\n C GRADE");
    }
    else
    {
        printf("\n FAIL");
    }
    printf("\n Marks Obtained in Subject 4:");
    scanf("%d",&s4);
    if((s4>=90) && (s4<=100))
    {
        printf("\n A GRADE");
    }
    else if((s4>=70) && (s4<90))
    {
        printf("\n B GRADE");
    }
    else if((s4>=50) && (s4<70))
    {
        printf("\n C GRADE");
    }
    else
    {
        printf("\n FAIL");
    }
    printf("\n Marks Obtained in Subject 5:");
    scanf("%d",&s5);
    if((s5>=90) && (s5<=100))
    {
        printf("\n A GRADE");
    }
    else if((s5>=70) && (s5<90))
    {
        printf("\n B GRADE");
    }
    else if((s5>=50) && (s5<70))
    {
        printf("\n C GRADE");
    }
    else
    {
        printf("\n FAIL");
    }
    tot=s1+s2+s3+s4+s5;
    printf("\n The Total marks is:%d",tot);
    avg=tot/5;
    printf("\n The average is:%d",avg);
    if((avg>=90) && (avg<=100))
    {
        printf("\n A GRADE");
    }
    else if((avg>=70) && (avg<90))
    {
        printf("\n B GRADE");
    }
    else if((avg>=50) && (avg<70))
    {
        printf("\n C GRADE");
    }
    else
    {
        printf("\n FAIL");
    }

    return 0;
}
