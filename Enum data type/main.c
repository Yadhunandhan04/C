#include<stdio.h>
enum year{jan,feb,mar,apr,may,june,july,aug,sep,oct,nov,dec}; 
void main()
{
    enum year;
    int a;
    for(a=jan;a<=dec;a++)
    printf("\nMonth : %d",a+1);
}