#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    printf("3rd element of array is: %u", *(ptr + 2));
    return 0;
}