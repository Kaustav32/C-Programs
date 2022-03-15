#include <stdio.h>
#include <string.h>
int main()
{
    printf("\n Kaustav Chamola");
    char st[40] = "KAUSTAV ";
    char *str = "CHAMOLA";
    strcat(st, str);
    printf("\n The value of st is now: %s", st);
    printf("\n The value of str is now: %s", str);
    return 0;
}