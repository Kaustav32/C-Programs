#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int i;
    int a;
    printf("\n Enter the number of years: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the Years: ");
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < a; i++)
    {
        if ((arr[i] % 4 == 0) && (arr[i] % 100 != 0))
            printf("\n %d is a leap year", arr[i]);
        else if (arr[i] % 400 == 0)
            printf("\n %d is a leap year", arr[i]);
        else
            printf("\n %d is not leap year", arr[i]);
    }
    return 0;
}