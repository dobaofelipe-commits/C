#include <stdio.h>
#include <math.h>

int main(){
   char lados;
    float area, lado;
    printf("Quantos lados tem o seu polígono regular ");
    scanf(" %c", &lados);
    switch (lados)
    {
    case '3':
            printf("Digite o tamanho dos lados em centimetros");
            scanf("%f",&lado);
            area=pow(lado,2)*sqrt(3)/4;
        printf("A área desse triangulo é igual a %.2f c2", area);
        break;

    case '4':
            printf("Digite o lado do quadrado em centimetros");
            scanf("%f",&lado);
            area=pow(lado,2);
        printf("A área desse quadrado é igual a %.2f c2", area);
        break;

        case '6':
            printf("Digite o lado do Hexagono  em centimetros ");
            scanf("%f",&lado);
            area=6*pow(lado,2)*sqrt(3)/4;
             printf("A área desse hexagono é igual a %.2f c2", area);
             break;
    default:
        printf("O programa não sabe calcular a área desse polígono");
        break;
        return 0;
    }
}