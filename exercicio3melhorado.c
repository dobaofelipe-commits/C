#include <stdio.h>

int main()
{
    float valor, divisao;
    int pessoas;
    printf("Vamos dividir a pizza para quantas pessoas? ");
    scanf("%d", &pessoas);
    printf("Digite o valor da pizza: ");
    scanf("%f", &valor);
    divisao=valor/pessoas;
    printf("O valor da pizza dividido para %d pessoas é %.2f",pessoas,divisao);

    return 0;
}