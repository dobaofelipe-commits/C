#include <stdio.h>

int main() {
    float velocidade;
    int maxima, multa;
    printf("Qual a velocidade máxima da avenida: ");
    scanf("%d", &maxima);
    printf("Qual a velocidade do motorista: ");
    scanf("%f", &velocidade);
    if(velocidade>maxima){
        multa=(velocidade-maxima)*5;
        printf("Velocidade acima do limite, você recebeu uma multa de %.0d reais",multa);
    } else {
        printf("Velocidade dentro do limite da via, você não recebeu multa nenhuma");
    }
    getchar();
    getchar();
    return 0;
}