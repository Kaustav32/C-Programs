#include <stdio.h>
#include <string.h>
int main()
{
    printf("\n Kaustav Chamola");
    char st[40] = "KAUSTAV ";
    char *str = "KAUSTAV";
    int value = strcmp(st, str);
    printf("\n The value of is now: %d", value);
    return 0;
}