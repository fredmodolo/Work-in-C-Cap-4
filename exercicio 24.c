#include <stdio.h>
int main () {
    float reais, dolar, marco, libra;
    printf("Digite o valor em reais (R$): ");
    scanf("%f", &reais);
    dolar = reais / 1.80;
    marco = reais / 2.00;
    libra = reais / 3.57;
    printf("\nCom R$ %.2f você pode comprar:\n", reais);
    printf("-> %.2f dólares\n", dolar);
    printf("-> %.2f marcos alemães\n", marco);
    printf("-> %.2f libras esterlinas\n", libra);
    return 0;
}
