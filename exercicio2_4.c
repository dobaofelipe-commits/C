#include <stdio.h>

int main(){
    float num1, num2;
    char expressao;
    printf("digite um numero ");
    scanf("%f",&num1);
    printf("digite mais um numero ");
    scanf("%f",&num2);
    printf("Digite um operador para fazer o calculo ");
    scanf(" %c", &expressao);

    switch (expressao) {
    case '+':
       printf("%.2f",num1+num2);
        break;
        case '-':
       printf("%.2f",num1-num2);
        break;
        case '*':
       printf("%.2f",num1*num2);
        break;
        case '/':
       printf("%.2f",num1/num2);
        break;
    
    default:
    printf("Operador desconhecido");
        break;
    }

    return 0;

}