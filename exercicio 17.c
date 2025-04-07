#include <stdio.h>
int main () {
    float raio, comprimento, area, volume;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    comprimento = 2 * 3.14 * raio;
    printf("O comprimento da esfera é de: %0.2f\n ", comprimento);
    area = 3.14 * (raio * raio);
    printf("A área da esfera é de: %0.2f\n", area);
    volume = 1/4 * 3.14 * raio;
    printf("O volume da esfera é de: %0.2f\n ", volume);
    return 0;
}