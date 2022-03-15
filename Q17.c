#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int a;
    printf("\n Enter the value of a: ");
    scanf("%d", &a);
    while (a < 10)
    {
        printf("\n %d", a);
        a++;
    }
    return 0;
}