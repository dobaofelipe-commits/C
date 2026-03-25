#include <stdio.h>

int main() {
    int numero, i=1, contador=0,resto;
    printf("Digite um numero ");
    scanf("%d", &numero);
    for(i=1;i<=numero;i++){
        resto=numero%i;
        if(resto==0){
            contador+=1;
        }
    } 
    if(contador<3){
        printf("O numero %d é primo", numero);
    } else {
        printf("O numero %d não é primo e é divisivel por %d numeros", numero, contador);
    }
    getchar();
    getchar();
    return 0;
    
}