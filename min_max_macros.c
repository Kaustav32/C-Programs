#include <stdio.h>
#define max (a>b)
#define PI 3.14
int main()
{
    printf("\n Kaustav Chamola");
    float area;
    float r = 4;
    area = PI * r * r;
    printf("\n **** PI ****");
    printf("\n area:%f ", area);
    int a;
    int b;
    printf("\n");
    printf("\n **** GREATEST OF TWO NUMBERS ****");
    printf("\n enter the value of a: ");
    scanf("%d", &a);
    printf("\n enter the value of b: ");
    scanf("%d", &b);
    if(max){
        printf("\n a is greater");
    }
    else{
        printf("\n b is greater");
    }
    return 0;
}