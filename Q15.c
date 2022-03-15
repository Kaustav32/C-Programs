#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int num, sq, a;
    printf("\n Enter the value of num: ");
    scanf("%d", &num);
    sq = num * num;
    a = num % 10;
    if (a == 5)
    {
        printf("the square of the given number is: %d", sq);
    }
    else
    {
        printf("the least significant digit is not 5");
    }
    return 0;
}