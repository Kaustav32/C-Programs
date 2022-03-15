#include <stdio.h>
int hello(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n value of the elemen %d is : %d", i + 1, arr[i]);
    }
}
int main()
{
    int marks[] = {12, 23, 34, 45, 56};
    hello(marks, 5);
    return 0;
}