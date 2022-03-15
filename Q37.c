#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int a = 0, sum = 0;
    do
    {
        printf("\n %d square: %d", a, a * a);
        sum += a;
        a++;
    } while (a <= 10);
    printf("\n sum: %d", sum);
    return 0;
}