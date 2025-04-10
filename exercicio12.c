#include <stdio.h>
int main () {
    float salariobruto, aumento, salariofinal;
    printf("Digite o salário bruto: ");
    scanf("%f", &salariobruto);
    if (salariobruto <= 350)
    {
        aumento = 100;
        salariofinal = salariobruto + aumento - (salariobruto*0.07);
        printf("O salário final será de: %.2f", salariofinal);
    }
    else if (salariobruto > 350 && salariobruto < 600)
    {
        aumento = 75;
        salariofinal = salariobruto + aumento - (salariobruto*0.07);
        printf("O salário final será de: %.2f", salariofinal);
    }
    else if (salariobruto >= 600 && salariobruto <= 900)
    {
        aumento = 50;
        salariofinal = salariobruto + aumento - (salariobruto*0.07);
        printf("O salário final será de: %.2f", salariofinal);
    }
    else if (salariobruto > 900)
    {
        aumento = 35;
        salariofinal = salariobruto + aumento - (salariobruto*0.07);
        printf("O salário final será de: %.2f", salariofinal);
    }
    return 0;
}