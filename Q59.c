#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int arr[5] = {2, 4, 6, 8, 10};
    printf("\n 1st Element: %d, Adress: %u", arr[0], &arr[2]);
    printf("\n 2nd Element: %d, Adress: %u", arr[1], &arr[4]);
    printf("\n 3rd Element: %d, Adress: %u", arr[2], &arr[6]);
    printf("\n 4th Element: %d, Adress: %u", arr[3], &arr[8]);
    printf("\n 5th Element: %d, Adress: %u", arr[4], &arr[10]);
    return 0;
}