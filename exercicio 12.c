#include <stdio.h>
int main () {
    float salariominimo, salario, total;
    salariominimo = 1000;
    printf("Digite o seu salário: ");
    scanf("%f", &salario);
    total = salario / salariominimo;
    printf("Você recebe %0.2f salários minímos.", total);
    return 0;
}