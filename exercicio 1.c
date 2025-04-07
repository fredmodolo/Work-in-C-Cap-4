#include <stdio.h>
int main () {
    float n1, n2, resultado;
    printf("Digite dois números: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    resultado = (n1 - n2);
    printf("O resultado é de: %0.1f\n", resultado);
    return 0;
}