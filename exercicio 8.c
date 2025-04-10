#include <stdio.h>
int main () {
    float pesoemkg, pesoemgramas;
    printf("Digite seu peso em kilogramas(KG): ");
    scanf("%f", &pesoemkg);
    pesoemgramas = pesoemkg * 1000;
    printf("O seu peso em gramas é: %.2f gramas\n", pesoemgramas);
    return 0;
}