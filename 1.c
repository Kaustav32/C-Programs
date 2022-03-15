#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\n %d: ", i + 1);
        scanf("\n %d", &marks[i]);
    }
    printf("\n the element is: %d", *(marks+3));

    return 0;
}