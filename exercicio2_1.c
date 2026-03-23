#include <stdio.h>

int main() {
    int num, resto;
    printf("Digite um numero inteiro: ");
    scanf(" %d", &num);
    resto=num%2;
    if(resto==0){
        printf("Esse nùmero é par");
    } else {
        printf("esse numero é impar");
    }
    getchar();
    getchar();
    return 0;
}