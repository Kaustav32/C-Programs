#include <stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    float temperature;
    printf("\n enter the temperature in farenhite: ");
    scanf("%f", &temperature);
    float celcius = temperature - 32 * 5 / 9;
    printf("temperature converted from ferenhite to celcius is %f", celcius);
    return 0;
}