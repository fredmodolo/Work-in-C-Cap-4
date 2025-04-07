#include <stdio.h>
int main () {
    float angulo1, angulo2, angulo3;
    printf("Digite o valor do primeiro angulo: ");
    scanf("%f", &angulo1);
    printf("Digite o valor do segundo angulo: ");
    scanf("%f", &angulo2);
    angulo3 = 180 - (angulo1+angulo2);
    printf("O valor do terceiro angulo é de: %0.2f", angulo3);
    return 0;

}