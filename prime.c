#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int a = 2, b, prime = 1;
    printf("\n enter the number: ");
    scanf("%d", &b);
    while (a < b)
    {
        if (b % a == 0)
        {
            prime = 0;
            break;
        }
        a++;
    }
    if (prime == 0)
    {
        printf("\n %d is not a prime number", b);
    }
    else
    {
        printf("\n %d is a prime number", b);
    }
    return 0;
}