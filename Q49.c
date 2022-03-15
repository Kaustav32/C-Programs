#include <stdio.h>
#include<string.h>
 
int main()
{
    printf("\n Kaustav Chamola");
    char a[20], c;
    puts("\n Enter the string: ");
    gets(a);
    c = *a;
    strrev(a);
    if (c == *a)
    {
        puts("Given string is palindrome.");
    }
    else{
        puts("Given string is not palindrome.");
    }
    return 0;
}