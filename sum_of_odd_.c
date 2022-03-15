#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int a, n, sum = 0;
    printf("\n Enter the value of n: ");
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        if (a % 2 != 0)
        {
            printf("\n %d", a);
            sum += a;
        }
    }
    printf("\n Sum: %d", sum);
    return 0;
}