#include<stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int physics, chemistry, maths;
    printf("enter the marks in physics");
    scanf("%d", &physics);
    printf("enter the marks in chemistry");
    scanf("%d", &chemistry);
    printf("enter the marks in maths");
    scanf("%d", &maths);
    int marks = physics+chemistry+maths;
    printf("the total marks obtained by the student are = %d", marks);
    if(marks>=40 && physics>=33 && chemistry>=33 && maths>=33){
        printf("\n the student has passed the examination");
    }
    else{
        printf("\n the student has failed the examination");
    }
    return 0;
}