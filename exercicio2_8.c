#include <stdio.h>

int main() {
    float total, normal, bonus1, bonus2, valor;
    int horas;
    printf("Quantas horas semanais você trabalha ");
    scanf("%d", &horas);
    printf("Qual o valor da sua hora de trabalho ");
    scanf("%f", &valor);
    if(horas<41){
        total=valor*horas;
        printf("Seu salario semanal é igual a %.2f", total);
    } else if(horas<61){
        bonus1=horas-40;
        total=(valor*40)+(valor*1.5*bonus1);
        printf("Seu salario semanal é igual a %.2f", total);
    } else {
        bonus1=20;
        bonus2=horas-60;
        total=(valor*40)+(valor*1.5*20)+(valor*2*bonus2);
        printf("Seu salario semanal é igual a %.2f", total);
    }
    getchar();
    getchar();
    return 0;
}