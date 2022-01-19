#include<stdio.h>
#define pi 3.14
int main()
{
    float area,r;
    printf("\nGive the radius : ");
    scanf("%f",&r);
    area=pi*r*r;
    printf("\nArea of the circle : %f",area);
    return 0;
}
