#include <stdio.h>
int main()
{
    printf("Kaustav Chamola");
    int a = 4;
    int *j = &a;
    int **k = &j;
    printf("\n value of a is %d", a);
    printf("\n address of a is %u", &a);
    printf("\n value of a is %u", *(&a));
    printf("\n address of j is %u", &j);
    printf("\n value of j is %u", *(&j));
    printf("\n value of k is %u", *(&k));
    printf("\n address of a is %u", *(*(&k)));
    printf("\n value of a is %u", ***(&k));
    return 0;
}