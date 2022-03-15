#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int intType;
    float floatType;
    char charType;
    double doubleType;
    printf("\n Size of int: %zu bytes", sizeof(intType));
    printf("\n Size of float: %zu bytes", sizeof(floatType));
    printf("\n Size of char: %zu byte", sizeof(charType));
    printf("\n Size of double: %zu bytes", sizeof(doubleType));
    return 0;
}