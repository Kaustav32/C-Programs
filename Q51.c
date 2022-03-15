#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int alp;
    int value = 1;
    printf("\n Enter the number of rows you want: ");
    scanf("%dcl", &alp);
    for (int i = 1; i <= alp; i++)
    {
        for (int j = 1; j <= i; ++j)
        {
            printf("%3d ", value);
            ++value;
        }
        printf("\n");
    }
    return 0;
}