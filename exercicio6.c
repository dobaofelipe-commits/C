#include <stdio.h>

int main()
{
    int horas=0, minutos=0, segundos=0, dias=0, tempo;
    printf("Digite o tempo em segundos ");
    scanf("%d",&tempo);
    segundos=tempo%60;
    minutos=(tempo%3600)/60;
    horas=(tempo/3600)%24;
    dias=(tempo/3600)/24;
    printf("isso equivale a %d dias e %d:%d:%d",dias,horas,minutos,segundos);

    return 0;
}