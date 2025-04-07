#include <stdio.h>
int main () {
    float salario, comissao, resultado;
    printf("Digite o seu salário: ");
    scanf("%f", &salario);
    printf("Digite o valor das vendas: ");
    scanf("%f", &comissao);
    resultado = salario + (comissao*0.4);
    printf("O salario final é de %0.2f", resultado);
    return 0;
}