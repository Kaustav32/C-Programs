#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int *a;
    int **b;
    int val[7] = {11, 22, 33, 44, 55, 66, 77};
    a = &val[0];
    b = &a;
    for (int i = 0; i < 7; i++)
    {
        printf("\n val[%d]: value is %d\n", i+1, **b);
        a++;
    }
    return 0;
}
//Write a program to print value of an array by index and by using pointer to pointer?