#include <stdio.h>
int hello(int marks[3][10], int std, int sbj)
{
    for (int i = 0; i < std; ++i)
    {
        for (int j = 0; j < sbj; ++j)
        {
            printf(" %u ", marks[i][j]*2);
        }
    }
}
int main()
{
    printf("\n Kaustav Chamola");
    int std = 3;
    int sbj = 3;
    int marks[3][10];
    for (int i = 0; i < std; ++i)
    {
        for (int j = 0; j < sbj; ++j)
        {
            printf("\n 2 x ");
            scanf("%d", &marks[i][j]);
        }
    }
    hello(marks, std, sbj);
    return 0;
}