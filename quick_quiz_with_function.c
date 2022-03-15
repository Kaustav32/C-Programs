#include <stdio.h>
int hello(int marks[3][5], int std, int sbj)
{
    int i, j;
    for (int i = 0; i < std; i++)
    { 
        for (int j = 0; j < sbj; j++)
        {
            printf(" %d ", marks[i][j]);
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
    int sbj = 5;
    int marks[3][5];
    for (int i = 0; i < std; i++)
    {
        for (int j = 0; j < sbj; j++)
        {
            printf("\n marks of %d in %d: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    int marks[3][5], std = 3, sbj= 5;
    hello(marks, 3,5);
    return 0;
}