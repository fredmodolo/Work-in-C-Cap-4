#include <stdio.h>
int main () {
    float salario, novosalario;
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);
    if (salario <= 300)
    {
        novosalario = salario + (salario*0.5);
        printf("O novo salário será de: %.2f", novosalario);
    }
    else if (salario > 300 && salario <= 500)
    {
        novosalario = salario + (salario*0.4);
        printf("O novo salário será de: %.2f", novosalario);
    }
    else if (salario > 500 && salario <= 700)
    {
        novosalario = salario + (salario*0.3);
        printf("O novo salário será de: %.2f", novosalario);
    }
    else if (salario > 700 && salario <= 800)
    {
        novosalario = salario + (salario*0.2);
        printf("O novo salário será de: %.2f", novosalario);
    }
    else if (salario > 800 && salario <= 1000)
    {
        novosalario = salario + (salario*0.1);
        printf("O novo salário será de: %.2f", novosalario);
    }
    else if (salario > 1000)
    {
        novosalario = salario + (salario*0.05);
        printf("O novo salário será de: %.2f", novosalario);
    }
    return 0;
}