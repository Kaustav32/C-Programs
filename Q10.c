#include <stdio.h>
int main()
{
    printf("Kaustav Chamola");
    int length;
    int breadth;
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the breadth: ");
    scanf("%d", &breadth);
    int area = length * breadth;
    printf("Area of rectangle is = %d", area);
    return 0;
}