#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    printf("here: %d\n", arr[0]);
    printf("here: %d", *(&ptr[0]));
    return 0;
}