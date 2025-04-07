#include <stdio.h>
int main () {
    float horastrabalhadas, salariominimo, horasextras, resultadoa, resultadob, salariobruto, quantia, salario;
    salariominimo = 1000;
    printf("Digite as horas trabalhadas: ");
    scanf("%f", &horastrabalhadas);
    printf("Digite as horas extras trabalhadas: ");
    scanf("%f", &horasextras);
    resultadoa = horastrabalhadas = (salariominimo*1/8);
    printf("\nO resultado é de: %0.2f", resultadoa);
    resultadob = horasextras = (salariominimo*1/4);
    printf("\nO resultado é de: %0.2f", resultadob);
    salariobruto = horastrabalhadas * resultadoa;
    printf("\nO salário bruto é de: %0.2f", salariobruto);
    quantia = horastrabalhadas * resultadob;
    printf("\nA quantia a receber é de: %0.2f reais", quantia);
    salario = salariobruto + quantia;
    printf("\nO salário a receber é de: %0.2f reais", salario);
    return 0;

}