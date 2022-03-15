#include <stdio.h>
int hello(int *x, int *y, int *z)
{
    int w = *x;
    *x = *y;
    *y = *z;
    *z = w;
}
int main()
{
    printf("\n Kaustav Chamola");
    int a;
    int b;
    int c;
    printf("\n Enter the value a: ");
    scanf("\n %d", &a);
    printf("\n Enter the value b: ");
    scanf("\n %d", &b);
    printf("\n Enter the value c: ");
    scanf("\n %d", &c);
    printf("\n********Before Swap********");
    printf("\n");
    printf("\n a = %d, b = %d, c =  %d", a,b,c);
    printf("\n");
    printf("\n********After Swap********");
    printf("\n");
    hello(&a, &b, &c);
    printf("\n a = %d, b = %d, c =  %d", a,b,c);
    return 0;
}