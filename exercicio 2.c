#include <stdio.h>
int main () {
    float n1, n2, n3, resultado;
    printf("Digite 3 números: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    resultado = (n1*n2*n3);
    printf("O resultado é de: %0.1f\n", resultado);
    return 0;
}