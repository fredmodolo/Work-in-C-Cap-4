#include <stdio.h>
int main () {
    float n1, n2, resultado;
    printf("Digite 2 número diferentes de 0: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    resultado = n1/n2;
        printf("O resultado é de: %0.2f\n", resultado);
        if (n1 == 0 || n2 == 0) {
        printf("Opção inválida!");
    }
    return 0;
}