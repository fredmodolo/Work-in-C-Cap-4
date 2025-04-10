#include <stdio.h>
int main () {
    float peso, pesoengordar, pesoemaagrecer;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    pesoengordar = peso + (peso*0.15);
    printf("O seu peso final se vc engordar 15% é de: %0.2f\n", pesoengordar);
    pesoemaagrecer = peso - (peso*0.2);
    printf("O seu peso final se vc emagrecer 20% é de: %0.2f\n", pesoemaagrecer);
    return 0;
}