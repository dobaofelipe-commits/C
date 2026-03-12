#include <stdio.h>

int main()
{
    float valor, divisao;
    printf("Vamos dividir a pizza para 4 amigos ");
    printf("Digite o valor da pizza: ");
    scanf("%f", &valor);
    divisao=valor/4;
    printf("O valor da pizza dividido para 4 pessoas é %.2f",divisao);

    return 0;

}