#include <stdio.h>
int hello(int a, int b)
{
    int r = a % b;
}
int hi(int c, int d)
{
    int q = c / d;
}
int main()
{
    printf("\n Kaustav Chamola");
    int a = 428;
    int b = 2;
    printf("\n The remainder of %d and %d is: %d ", a, b, hello(a, b));
    printf("\n The quotient of %d and %d is: %d ", a, b, hi(a, b));
    return 0;
}