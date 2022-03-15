#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int age;
    printf("\n Enter the age of the person: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf(" you are eligible");
    }
    else
    {
        printf("sorry you are not eligible");
    }
    return 0;
}
