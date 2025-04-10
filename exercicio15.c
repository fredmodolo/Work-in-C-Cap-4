#include <stdio.h>
int main () {
    float valor, resultado;
    int investimento;
    printf("Agência Bancária -  Escolha seu Investimento:");
    printf("\n1- Poupança: ");
    printf("\n2- Fundos de renda fixa: ");
    scanf("%d", &investimento);
    printf("\nDigite o valor do investimento: ");
    scanf("%f", &valor);
    if (investimento == 1)
    {
        resultado = valor + (valor*0.3);
        printf("\nO valor do investimento após 1 mês é de: %.2f", resultado);
    }
    if (investimento == 2)
    {
        resultado = valor + (valor*0.4);
        printf("\nO valor do investimento após 1 mês é de: %.2f", resultado);
    }
    return 0;
}