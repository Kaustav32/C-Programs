#include <stdio.h>

int main()
{
    printf("\n Kaustav Chamola");
    int a, b, r, sum = 0;
    printf("\n Enter a number: ");
    scanf("%d", &a);
    b = a;
    while (a != 0)
    {
        r = a % 10;
        sum = sum * 10 + r;
        a /= 10;
    }
    printf("after reverse = %d", sum);
    return 0;
}