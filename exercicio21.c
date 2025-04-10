#include <stdio.h>
int main () {
    float preco;
    int codigo;
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    printf("Digite o código de origem do produto: ");
    scanf("%d", &codigo);
    printf("Preço do produto: R$ %.2f\n", preco);
    if (codigo == 1) {
        printf("Procedência: Sul\n");
    }
    else if (codigo == 2) {
        printf("Procedência: Norte\n");
    }
    else if (codigo == 3) {
        printf("Procedência: Leste\n");
    }
    else if (codigo == 4) {
        printf("Procedência: Oeste\n");
    }
    else if (codigo == 5 || codigo == 6) {
        printf("Procedência: Nordeste\n");
    }
    else if (codigo == 7 || codigo == 8 || codigo == 9) {
        printf("Procedência: Sudeste\n");
    }
    else if (codigo >= 10 && codigo <= 20) {
        printf("Procedência: Centro-Oeste\n");
    }
    else if (codigo >= 21 && codigo <= 30) {
        printf("Procedência: Nordeste\n");
    }
    else {
        printf("Código de origem inválido!\n");
    }
    return 0;
}