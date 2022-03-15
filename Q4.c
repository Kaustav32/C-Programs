#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    float pol, psy, eng, eco, ip;
    printf("\n Enter the marks of Political Science: ");
    scanf("%f", &pol);
    printf("Enter the marks of Psychology: ");
    scanf("%f", &psy);
    printf("Enter the marks of English: ");
    scanf("%f", &eng);
    printf("Enter the marks of Economics: ");
    scanf("%f", &eco);
    printf("Enter the marks of IP: ");
    scanf("%f", &ip);
    float p = (pol + psy + eng + eco + ip) / 500 * 100;
    printf("The total percentage of all 5 subjects is: %f", p);
    return 0;
}