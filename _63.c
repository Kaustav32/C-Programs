#include <stdio.h>
void main()
{
    printf("\n Kaustav Chamola");
    int arr[100];
    int i, mx, mn, n;
    printf("\n Enter the no. of element to store in array: ");
    scanf("%d", &n);
    printf("\n Enter %d elements in the array : ", n);
    for (i = 0; i < n; i++)
    {
        printf("element: ");
        scanf("%d", &arr[i]);
    }
    mx = arr[0];
    mn = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
        if (arr[i] < mn)
        {
            mn = arr[i];
        }
    }
    printf("\n Maximum element is : %d", mx);
    printf("\n Minimum element is : %d", mn);
}
//Write a program to find min and max element from an array?s