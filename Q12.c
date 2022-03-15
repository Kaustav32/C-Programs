#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int num1, num2, a;
    printf("\n enter the value of num1: ");
    scanf("%d", &num1);
    printf("enter the value of num2: ");
    scanf("%d", &num2);
    a = (num1 > num2);
    a ? printf("the first number is greater than the second one") : printf("the second number is greater");
    return 0;
}