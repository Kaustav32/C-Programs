#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int i, j, a;
    char b = 'A';
    printf("\n Enter the no. of lines: ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", b++);
        }
        printf("\n");
    }
    return 0;
}