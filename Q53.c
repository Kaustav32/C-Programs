#include <stdio.h>
void hello(int arr[10])
{
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("\n Elements are: %d", arr[i]);
        if (arr[i] > 5)
        {
            count++;
        }
    }
    printf("\n Total positive integers are: %d", count);
}

int main()
{
    printf("Kaustav Chamola");
    int array[10] = {-1, -2, -3, -4, 1, 2, 7, 8, 9, 10};
    hello(array);
    return 0;
}