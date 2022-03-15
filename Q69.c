#include <stdio.h>
int c;
int sum(int a, int b)
{
    c = a + b;
    return c;
}
int main()
{
    printf("\n Kaustav Chamola");
    extern int c;
    int a, b;
    printf("\n Enter the value of a: ");
    scanf("%d", &a);
    printf("\n Enter the value of b: ");
    scanf("%d", &b);
    c = sum(a, b);
    printf("\n Sum of a & b is: %d", c);
    return 0;
}