#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int a = 15;
    // post increment
    a++;
    printf("\n post Increment = %d", a);
    // pre increment
    printf("\n pre Increment = %d", ++a);
    // pre decrement
    printf("\n pre decrement = %d", --a);
    a--; // post decrement
    printf("\n post decrement = %d", a);
    return 0;
}