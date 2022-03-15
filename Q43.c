#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int grade;
    printf("\n Enter the marks obtained by the student: ");
    scanf("%d", &grade);
    if (grade >= 80 && grade <= 100)
    {
        printf("A");
    }
    else if (grade >= 60 && grade <= 79)
    {
        printf("B");
    }
    else if (grade >= 40 && grade <= 59)
    {
        printf("C");
    }
    else if (grade >= 20 && grade < 39)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
    return 0;
}
// relational operator >=<