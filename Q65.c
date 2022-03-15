#include <stdio.h>
int hello(int marks[3][3], int std, int sbj)
{
    for (int i = 0; i < std; ++i)
    {
        for (int j = 0; j < sbj; ++j)
        {
            printf(" %u ", marks[i][j] * 5);
            if (j == sbj - 1)
            {
                printf("\n \n ");
            }
        }
    }
}
int main()
{
    printf("\n Kaustav Chamola");
    int std = 3;
    int sbj = 3;
    int marks[3][3];
    for (int i = 0; i < std; ++i)
    {
        for (int j = 0; j < sbj; ++j)
        {
            printf("\n Marks of %d in %d: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    hello(marks, std, sbj);
    return 0;
}
// Matrix