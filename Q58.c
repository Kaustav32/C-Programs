#include <stdio.h>
int main()
{
    printf("Kaustav Chamola");
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\n Enter the element %d: ", i + 1);
        scanf("\n %d", &marks[i]);
    }
    return 0;
}