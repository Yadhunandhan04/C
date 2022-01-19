#include<stdio.h>
#include<string.h>
float add(float a,float b)
{
    return a+b;
}
float sub(float a,float b)
{
    return a-b;
}
float mul(float a,float b)
{
    return a*b;
}
float div(float a,float b)
{
    return a/b;
}
void main()
{
    float a,b;
    char c[5];
    printf("Enter a number : ");
    scanf("%f",&a);
    printf("Enter a number : ");
    scanf("%f",&b);
    printf("\n\nA.Add \nB.Subtract \nC.Multiply \nD.Divide \nSelect any Option: ");
    scanf("%s",&c);
    if(strcmp(c,"A")==0)
        printf("\nAddition : %.1f+%.1f=%.2f",a,b,add(a,b));
    else if(strcmp(c,"B")==0)
        printf("\nSubtraction : %.1f-%.1f=%.2f",a,b,sub(a,b));
    else if(strcmp(c,"C")==0)
        printf("\nMultiplication : %.1f*%.1f=%.2f",a,b,mul(a,b));
    else if(strcmp(c,"D")==0)
        if(b==0)
        printf("\nCannot Divide by '0'");
        else
        printf("\nDivision : %.1f/%.1f=%.2f",a,b,div(a,b));
    else printf("***Wrong choice***");
}