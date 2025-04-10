#include <stdio.h>
int main () {
    float altura, peso;
    char sexo;
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
    printf("Escolha seu sexo: h (Homem) ou m (Mulher): ");
    scanf(" %c", &sexo);
    if (sexo == 'h')
    {
        peso = (72.7 * altura) - 58;
        printf("O seu peso ideal é de: %.2f kg", peso);
    }
    else if (sexo == 'm')
    {
        peso = (62.1 * altura) - 44.7;
        printf("O seu peso ideal é de: %.2f kg", peso);
    }
    else {
        printf("Sexo inválido. Digite 'h' para homem ou 'm' para mulher.\n");
    }
    return 0;
}