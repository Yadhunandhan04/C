#include<stdio.h>
struct subjects{
    int physics;
    int chemistry;
    int biology;
    int english;
    int maths;
}st;
void main(){
    int n;
    float total,class_pass_percent,sum=0;
    printf("\nenter the number of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("\nmarks of student No. %d:",i+1);
    scanf("%d %d %d %d %d",&st.biology,&st.chemistry,&st.physics,&st.maths,&st.english);
    total=(st.biology+st.chemistry+st.physics+st.maths+st.english)/5;
    if (total>=40)
    sum++;}
    class_pass_percent=(sum/n)* 100;
    printf("\nTHE TOTAL CLASS PASS PERCENTAGE IS %.3f",class_pass_percent);
}