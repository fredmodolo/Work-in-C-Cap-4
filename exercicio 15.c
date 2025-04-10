#include <stdio.h>
int main () {
    float salariojoao, multa1, multa2, salariofinal;
    printf("Digite o salário de João: ");
    scanf("%f", &salariojoao);
    printf("Digite o valor das multas: ");
    scanf("%f", &multa1);
    scanf("%f", &multa2);
    salariofinal = salariojoao - (multa1 + (multa1*0.02)) - (multa2 + (multa2*0.02));
    printf("O salário final de João vai ser de: %0.2f reais", salariofinal);
    return 0;
}