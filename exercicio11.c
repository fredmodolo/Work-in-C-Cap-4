#include <stdio.h>
int main () {
    float salario, salariofinal;
    printf("Digite o salário: ");
    scanf("%f", &salario);
    if (salario <= 300)
    {
        salariofinal = salario + (salario*0.15);
        printf("O salário final é de: %.2f", salariofinal);
    }
    else if (salario > 300 && salario < 600)
    {
        salariofinal = salario + (salario*0.1);
        printf("O salário final é de: %.2f", salariofinal);
    }
    else if (salario >= 600 && salario <= 900)
    {
        salariofinal = salario + (salario*0.05);
        printf("O salário final é de: %.2f", salariofinal);
    }
    else if (salario > 900)
    {
        salariofinal = salario;
        printf("O salário final é de: %.2f", salariofinal);
    }
    return 0;
}