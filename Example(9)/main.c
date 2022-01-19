#include<stdio.h>
int main();
{
    int i, r=10;
    for(i=0;i<10;i++)
    {
        switch(i)
        {
        case 1: result=i;
        case 2: result=result+1;
        case 3: result=result-1;
        case 4: result=result+1;
        case 9: result=result-1;
        }
    }
    printf("%d",result);
}