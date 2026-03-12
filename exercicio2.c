#include <stdio.h>

int main()
{
    float n1, n2, soma, divisao, multiplicacao, subtracao;
    printf("Iremos fazer cálculos com numeros, lembre-se que a ordem importa.\n");
    printf("Digite um numero qualquer.");
    scanf("%f", &n1);
    printf("Digite outro numero qualquer.");
    scanf("%f", &n2);
    soma=n1+n2;
    subtracao=n1-n2;
    multiplicacao=n1*n2;
    divisao=n1/n2;
    printf("Resultado da soma = %.2f.\n",soma);
    printf("Resultado da subtração = %.2f.\n",subtracao);
    printf("Resultado da multiplicação %.2f.\n",multiplicacao);
    printf("Resultado da divisão %.2f.\n",divisao);

    return 0;
}