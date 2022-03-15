#include <stdio.h>
void sqr(int b)
{
    printf("\n square = %d\n", b * b);
}
int main()
{
    printf("\n Kaustav Chamola");
    int a = 0;
    void sqr(int);
    for (a = 1; a <= 5; a++)
        sqr(a);
    return 0;
}
