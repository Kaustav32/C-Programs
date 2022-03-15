#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    float pi;
    int r;
    printf("\n enter the value of pi: ");
    scanf("%f", &pi);
    printf("\n enter the value of r: ");
    scanf("%d", &r);
    float area = pi * r * r;
    printf("\n the area of cirlce is %f", area);
    float per = 2 * pi * r;
    printf("\n The perimeter of circle is %f", per);
    return 0;
}