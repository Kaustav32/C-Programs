#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int a = 22;
    int b = 44;
    int c;
    c = a;
    a = b;
    b = c;
    printf("\n after swap a = %d", a);
    printf("\n after swap b = %d", b);
    printf("\n the value of c = %d", c);
    return 0;
}
