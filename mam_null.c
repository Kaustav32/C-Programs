#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 345;
    // int *ptr =NULL;
    int *ptr = &a;
    if (ptr != NULL)
    {

        printf("%d\n", *ptr);
    }

    else
    {
        printf("hello");
    }

    return 0;
}