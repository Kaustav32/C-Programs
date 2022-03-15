#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int num;
    printf("\n enter the value of num: ");
    scanf("%d", &num);
    if (num > 100 && num < 1000)
    {
        printf("\n your number is greater than 100 and less than 1000");
    }
    else
    {
        printf("\n your number is even greater than 1000");
    }
    return 0;
}