#include <stdio.h>
void main() 
{
   FILE *fp;
   fp=fopen("File.txt", "w");
   fprintf(fp,"C and Data Structure Lab\n");
   fputs("Successfully Opened\n", fp);
   fclose(fp);
}