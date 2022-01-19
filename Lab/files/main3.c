#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fptr;
    char filename[15];
    char ch;
    printf("Enter the filename to be open : ");
    scanf("%s",filename);
    fptr=fopen(filename,"r");
    if(fptr==NULL)
    {
        printf("Cannot open the file \n");
        exit(0);
    }
    ch=fgetc(fptr);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    fclose(fptr);
}