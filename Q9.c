#include <stdio.h>
int main()
{
    printf("Kaustav Chamola");
    int a = 22;
    int b = 44;
    printf("\n before swap a = %d", a);
    printf("\n before swap a = %d", b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("\n after swap a = %d", a);
    printf("\n after swap b = %d", b);
    return 0;
}
