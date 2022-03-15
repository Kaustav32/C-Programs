#include <stdio.h>
int main()
{
    int num;
    printf("enter the value of num");
    scanf("%d", &num);
    if (num % 1 == 0 && num % num == 0)
    {
        printf("\n your number is a prime number");
    }
    else if (num % 1 == 0 && num % num == 0 && num % 2 == 0)
    {
        printf(" numer is not a prime number");
    }
    else
    {
        printf("\n your number is not a prime number");
    }
    return 0;
}