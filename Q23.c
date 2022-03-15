#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int a;
abc:
    printf("\n enter the value of a: ");
    scanf("%d", &a);
    if (a == 10)
    {
        printf("\n the value of a is 10");
    }
    else
    {
        printf("\n error");
    }
    goto abc;
}