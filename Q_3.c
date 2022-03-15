#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int arr[10];
    int *ptr = arr;
    for (int i = 0; i < 10; i++)
    {
        arr[10]=5*(i+1);
        printf("\n table is: %d", arr[10]);
    }
    return 0;
}