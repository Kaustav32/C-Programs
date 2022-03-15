#include <stdio.h>
int hello(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return ((num % 10) + hello(num / 10));
    }
}
int main()
{
    int num, sum;
    printf("\n Kaustav Chamola");
    printf("\n Enter the number to find the sum of its digits: ");
    scanf("%d", &num);
    sum = hello(num);
    printf("\n Sum of the digits of %d is: %d", num, sum);

    return 0;
}
