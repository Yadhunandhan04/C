#include <stdio.h>
#include <string.h>
union student
{
   char name[20],gender[10];
   int age;
};
int main()
{
   union student info;
   strcpy(info.name,"Martha");
   printf("\nName = %s",info.name);
   info.age = 18;
   printf("\nAge  = %d",info.age);
   strcpy(info.gender,"Female");
   printf("\nGender = %s",info.gender);
   printf("\nName   = %s",info.name);
   printf("\nAge    = %d",info.age);
   printf("\nGender = %s",info.gender);
}