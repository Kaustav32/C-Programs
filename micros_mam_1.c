#include <stdio.h>
#define wait getche()
void main()
{
    printf("\n Kaustav Chamola");
    int r;
    #undef wait() getch();
    for (r = 1; r <= 5; r++)
        printf("sqr=%d\n", r);
    wait;
}