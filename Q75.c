#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\n Kaustav Chamola");
    int *ptr, i;
    ptr = (void *)malloc(3 * sizeof(void));
    ptr = (int *)realloc(ptr, 30);
    for (i = 0; i < 3; i++)
    {
        printf("\n Enter the value no %d of this array: ", i);
        scanf("%d", &ptr[i]);
    }
    for (i = 0; i < 4; i++)
    {
        printf("\n The value at  %d of this array = %d ", i, ptr[i]);
    }
    return 0;
}