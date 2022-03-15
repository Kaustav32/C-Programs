#include<stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
int a = 12;
int *b = &a;
int **c = &b;
printf("\n The value of a is %u", ***(&c));
return 0;
}
// pointer to pointer