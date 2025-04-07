#include <stdio.h>
int main () {
    float idade, meses, dias, semanas;
    printf("Digite sua idade: ");
    scanf("%f", &idade);
    printf("Você tem %0.2f anos\n", idade);
    meses = idade * 12;
    printf("Você tem %0.2f meses\n", meses);
    dias = idade * 365;
    printf("Você tem %0.2f dias\n", dias);
    semanas = dias / 7;
    printf("Você tem %0.2f semanas\n", semanas);
    return 0;

}