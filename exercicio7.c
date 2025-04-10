#include <stdio.h>
int main () {
    float salario, resultado;
    printf("Digite seu salário: ");
    scanf("%f", &salario);
    if (salario < 500)
    {
        resultado = salario + (0.3*salario);
        printf("O seu salario com aumento é de: %.2f", resultado);
    }
    else if (salario > 500)
    {
        printf("Você não tem direito a aumento.");
    }
    return 0;
}