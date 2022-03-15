#include<stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    float pi;
    int radius;
    int area;
    printf("what is the value of pie");
    scanf("%f", &pi);
    printf("what is the value of radius");
    scanf("%d", &radius);
    area = pi*radius*radius;
    printf("the area of circle is %d", area);
    return 0;
}