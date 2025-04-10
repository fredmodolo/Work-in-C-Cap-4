#include <stdio.h>
int main () {
    float lado, resultado;
    printf("Digite o valor dos lados do quadradado: ");
    scanf("%f", &lado);
    resultado = lado * lado;
    printf("A área do quadrado será de: %0.2f\n", resultado);
    return 0;
}