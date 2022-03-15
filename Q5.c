#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int a, b, c, ch;
    printf("\n Enter the values of a: ");
    scanf("%d", &a);
    printf("Enter the values of b: ");
    scanf("%d", &b);
    printf("Airthmetic operations");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Modulas");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        c = a + b;
        printf("%d", c);
        break;

    case 2:
        c = a - b;
        printf("%d", c);
        break;

    case 3:
        c = a * b;
        printf("%d", c);
        break;

    case 4:
        c = a / b;
        printf("%d", c);
        break;

    case 5:
        c = a % b;
        printf("%d", c);
        break;

    default:
        printf("\nWrong Input");
    }
    return 0;
}