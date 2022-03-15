#include <stdio.h>
void hello(int a, int sum)
{
    sum = 0;
    while (a <= 5)
    {
        printf("\n the value of a = %d", a);
        sum += a;
        a++;
    }
    printf("\n the sum: %d", sum);
}
int main()
{
    printf("\n Kaustav Chamola");
    int a = 1, sum;
    hello(a, sum);
    return 0;
}