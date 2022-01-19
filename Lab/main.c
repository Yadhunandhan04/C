#include<stdio.h>
#define Pi 3.14
void main()
{
    float r,area;
    printf("Enter the radius of the circle : ");
    scanf("%f",&r);
    area=Pi*r*r;
    printf("\nArea of the circle is : %.2f",area);
}