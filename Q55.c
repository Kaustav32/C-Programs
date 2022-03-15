#include <stdio.h>
int hello(int *, int *);
int main()
{
    printf("\n Kaustav Chamola");
    int a = 2;
    int b = 4;
    int c = a+b;
    printf("\n*****Before*****");
    printf("\n Sum is: %d", c);
    printf("\n*****After*****");
    printf("\n Sum is: %u", hello(&a, &b));
    return 0;
}
int hello(int *x, int *y)
{
    *x = 3, *y = 7;
    return *x + *y;
}