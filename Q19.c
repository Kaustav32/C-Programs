#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int a = 1, sum = 0, num;
    printf("\n enter the value of num: ");
    scanf("%d", &num);
    while (a <= 10)
    {
        printf("\n %d*%d = %d", num, a, num * a);
        sum += num * a;
        a++;
    }
    printf("\n sum = %d", sum);
    return 0;
}