#include <stdio.h>
int main()
{
    int std = 2;
    int sbj = 2;
    int marks[2][2];
    for (int i = 4; i ; i--)
    {
        for (int j = 4; j ; j--)
        {
            printf("\n marks of %d in %d: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < std; i++)
    {
        for (int j = 0; j < sbj; j++)
        {
            printf("\n  %d ", marks[i][j]);
        }
    }
    return 0;
}