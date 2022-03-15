#include <stdio.h>
float avg(float a, float b, float c);
float avg(float a, float b, float c)
{
    return ((a + b + c) / 3);
}
int main()
{
    printf("\n Kaustav Chamola");
    int num1, num2, num3;
    printf("\n Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Average = %.2f", avg(num1, num2, num3));
    return 0;
}
// with argument and with return value