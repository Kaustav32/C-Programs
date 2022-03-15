#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int a = 1, num;
    printf("\n Enter the value of num: ");
    scanf("%d", &num);
    while (a <= 10)
    {
        printf("\n %d*%d = %d", num, a, num * a);
        a++;
    }
    return 0;
}