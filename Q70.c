#include <stdio.h>
#include <string.h>
int main()
{
    printf("\n Kaustav Chamola");
    char *st = "KAUSTAV";
    char str[40];
    strcpy(str, st);
    printf("\n Value of str is now: ");
    printf("\n %s", str);
    return 0;
}