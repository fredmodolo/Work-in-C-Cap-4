#include <stdio.h>
int main () {
    float salario, resultado;
    printf("Digite o salário: ");
    scanf("%f", &salario);
    if (salario <= 300)
    {
        resultado = salario + (salario*0.35);
        printf("O salário com aumento é de: %.2f", resultado);
    }
    else if (salario > 300)
    {
        resultado = salario + (salario*0.15);
        printf("O salário com aumento é de: %.2f", resultado);
    }
    return 0;
}