#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int a = -1, b = 1, c, d;
    d = !a || b;
    c = !a && b;
    printf("\n %d %d %d %d", a, b, c, d);
    return 0;
}