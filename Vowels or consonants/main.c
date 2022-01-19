#include<stdio.h>
void main()
{
   char q;
   printf("\nEnter any Alphabet : ");
   scanf("%c",&q);
   if (q=='a'||q=='e'||q=='i'||q=='o'||q=='u'||q=='A'||q=='E'||q=='I'||q=='O'||q=='U')
      printf("\nThe given word contains vowel");
   else
      printf("\nThe given word is a consonant");
}