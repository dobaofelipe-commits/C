#include <stdio.h>

int main (){ 
    int numero, dobro, cont, soma=0, j;
    for(int i=1;i<101;i++){
        dobro=i*2;
        for(j=1;j<=i;j++){
            
            if(i%j==0){
                soma+=j;

            }
            if(soma==dobro){
                printf("%d ", i);
            }
        }
        soma=0;
    }
    getchar();
    return 0;
}