#include <stdio.h>

int main()
{
    float fahrenheit, celcius;
    printf("Qual o valor em Celsius ");
    scanf("%f", &celcius);
    fahrenheit=(9*celcius+160)/5;
    printf("O valor em farenheigth é %.2f",fahrenheit);
}