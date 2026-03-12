#include <stdio.h>

int main()
{
    float n1, n2, media;
    printf("Qual a 1º nota do aluno ");
    scanf("%f", &n1);
    printf("Qual a 2º nota do aluno ");
    scanf("%f", &n2);
    media=(n1+n2)/2;
    printf("A média do aluno é %.1f", media);

    return 0;
}