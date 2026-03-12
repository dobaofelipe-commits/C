#include <stdio.h>

int main()
{ 
    int meses, i=1;
    float saldo;
    printf("Qual é o saldo da sua conta: ");
    scanf("%f", &saldo);
    printf("Quantos meses você pretende deixar o valor investido: ");
    scanf("%d", &meses);
    for (i=1;i<meses+1; i++)
    {
        saldo=saldo+(saldo*0,02);
        printf("Seu saldo no %d mes investido seria %.2f.\n",i,saldo);
    }

    

    return 0;
}