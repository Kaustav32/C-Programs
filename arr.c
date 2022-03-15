#include <stdio.h>

int main()
{
    printf("\n Kaustav Chamola");
    int arr[3][3], row = 3, col = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\nElements of row %d = ", i + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            printf("%d  ", arr[i][j]);
            printf("\n");
        }
    }
    return 0;
}