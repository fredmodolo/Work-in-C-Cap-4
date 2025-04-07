#include <stdio.h>
int main () {
    float diagonalmaior, diagonalmenor, resultado;
    printf("Digite o valor da diagonal maior do losango: ");
    scanf("%f", &diagonalmaior);
    printf("Digite o valor da diagonal menor do losango: ");
    scanf("%f", &diagonalmenor);
    resultado = (diagonalmaior*diagonalmenor)/2;
    printf("A área do losango será de: %0.2f\n", resultado);
    return 0;
}