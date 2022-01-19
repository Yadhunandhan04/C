#include<stdio.h>
void check_perfect(int n);
void main(){
    int n;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    check_perfect(n);
}
void check_perfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)
    printf("%d IS A PERFECT NUMBER",n);
    else
    printf("%d IS NOT A PERFECT NUMBER",n);
}