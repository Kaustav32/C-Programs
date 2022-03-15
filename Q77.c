#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\n Kaustav Chamola");
    int *ptr, i;
    ptr = (int *)calloc(3, 4);
    for (i = 0; i < 3; i++)
    {
        printf("\n Enter the value no %d of this array: ", i);
        scanf("%d", &ptr[i]);
    }
    for (i = 0; i < 4; i++)
    {
        printf("\n sThe value at  %d of this array = %d ", i, ptr[i]);
    }
    free(ptr);
}