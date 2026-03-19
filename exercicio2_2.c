# include <stdio.h>

int main(){
    int x,y,z,palavra;
    char c;
    printf("Digite o primeiro lado do triângulo");
    scanf("%d", &x);
    printf("Digite o segundo lado do triângulo");
    scanf("%d", &z);
    printf("Digite o terceiro lado do triângulo");
    scanf("%d", &y);
    if(x==z && x==y){
        printf("Esse triangulo é equilatero");
    } else if((x==z && x!=y) || (x==y && x!=z) || (y==z)) {
         printf("Esse triangulo é isosceles");
    } else {
        printf("Esse triângulo é escaleno");
    }
    printf("Enter para encerrar");
    getch();
    return 0;
}
