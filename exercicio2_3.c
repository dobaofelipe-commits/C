#include <stdio.h>

int main(){
    float a, b, c, maior, menor, medio;
    printf("Escreva um numero");
    scanf("%f",&a);
    printf("Escreva um numero");
    scanf("%f",&b);
    printf("Escreva um numero");
    scanf("%f",&c);
    if(a>b && a>c){
        maior=a;
    }else if(b>c){
        maior=b;
    } else {
        maior=c;
    }
    if(a<b && a<c){
        menor=a;
    }else if(b<c){
        menor=b;
    } else {
        menor=c;
    }
    if((a>b && a<c) || (a<b && a>c)){
        medio = a;
    } else if((b>a && b<c) || (a>b && b>c)){
        medio = b;
    } else {
        medio=c;
    }
    printf("O maior numero é %.2f, o menor é %.2f e o medio é %.2f", maior, menor, medio);
    getch();
}