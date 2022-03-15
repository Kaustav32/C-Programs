#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
    printf("\n Kaustav Chamola");
    char s[50], f;
    int c = 0, i;
    puts("\n Enter the string: ");
    gets(s);
    puts("\n Enter the character you want to find: ");
    f = getchar();
    for (i = 1; i <= 15; i++)
    {
        if (s[i] == f)
            c++;
    }
    printf("The character %c in the given string is occuring %d times", f, c);
}