#include <stdio.h>
int hello(int);
int main()
{
    printf("\n Kaustav Chamola");
    int a;
    printf("\n enter the value of a: ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("%d term of the fabonacci series is: %d", a, hello(a));
    }
    return 0;
}
int hello(int x)
{
    if (x == 0)
    {
        x = 0;
        return x;
    }
    if (x == 1)
    {
        x = 1;
        return x;
    }
    else
    {
        return hello(x - 1) + hello(x - 2);
    }
}