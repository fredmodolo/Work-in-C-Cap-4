#include <stdio.h>
int main () {
    float saldo, aumento;
    printf("Digite o saldo médio: ");
    scanf("%f", &saldo);
    if (saldo > 400)
    {
        aumento = saldo + (saldo*0.3);
        printf("O resultado é de: %.2f, e o crédito é de %.2f", aumento, saldo*0.3);
    }
    else if (saldo <= 400 && saldo > 300)
    {
        aumento = saldo + (saldo*0.25);
        printf("O resultado é de: %.2f, e o crédito é de %.2f", aumento, saldo*0.25);
    }
    else if (saldo <= 300 && saldo > 200)
    {
        aumento = saldo + (saldo*0.2);
        printf("O resultado é de: %.2f, e o crédito é de %.2f", aumento, saldo*0.2);
    }
    else if (saldo <= 200)
    {
        aumento = saldo + (saldo*0.1);
        printf("O resultado é de: %.2f, e o crédito é de %.2f", aumento, saldo*0.1);
    }
    return 0;
}