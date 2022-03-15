#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int arr[10];
    int *ptr = arr;
    int n;
    printf("\n enter the number of which you want the multiplication table: ");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        arr[10] = n * (i + 1);
        printf("\n %d x %d = %d", n, i+1 , arr[10]);
    }
    return 0;
}