#include <stdio.h>
#include <string.h>
int main()
{
    printf("\n Kaustav Chamola");
    char a[20];
    puts("\n Enter the string: ");
    gets(a);
    strrev(a);
    puts("Print string in reverse: ");
    puts(a);
    return 0;
}