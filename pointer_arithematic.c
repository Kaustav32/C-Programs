#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int a = 24;
    int *ptr = &a;
    printf("\n value of ptr is %u", ptr);
    ptr = ptr + 1;
    printf("\n value of ptr is %u", ptr);

    return 0;
}