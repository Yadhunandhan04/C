#include <stdio.h>
int main()
{
    char a[20];
    int ba,hra,da,ca,ta,ma,sa,totgs,pf,pt,esi,tot,totsal;
    printf("\nEmployee Name : ");
    scanf("%s",a);
    printf("\nBasic : ");
    scanf("%d",&ba);
    printf("\nHouse Rental Allowance : ");
    scanf("%d",&hra);
    printf("\nDearness Allowance : ");
    scanf("%d",&da);
    printf("\nConveyance Allowance : ");
    scanf("%d",&ca);
    printf("\nTelephone Allowance : ");
    scanf("%d",&ta);
    printf("\nMiscellaneous Allowance : ");
    scanf("%d",&ma);
    printf("\nSpecial Allowance : ");
    scanf("%d",&sa);
    totgs=ba+hra+da+ca+ta+ma+sa;
    printf("\nGross Salary : %d",totgs);
    printf("\n");
    printf("\nPF : ");
    scanf("%d",&pf);
    printf("\nProfessional Tax : ");
    scanf("%d",&pt);
    printf("\nESI : ");
    scanf("%d",&esi);
    tot=pf+pt+esi;
    totsal=totgs-tot;
    printf("\nTotal Salary : %d",totsal);
    return 0;
}



