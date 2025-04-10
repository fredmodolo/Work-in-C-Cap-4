#include <stdio.h>
int main() {
    int idade;
    float peso;
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);
    printf("Digite o peso da pessoa: ");
    scanf("%f", &peso);
    int grupo;
    if (idade < 20) {
        if (peso <= 60)
            grupo = 9;
        else if (peso <= 90)
            grupo = 8;
        else
            grupo = 7;
    }
    else if (idade <= 50) {
        if (peso <= 60)
            grupo = 6;
        else if (peso <= 90)
            grupo = 5;
        else
            grupo = 4;
    }
    else {
        if (peso <= 60)
            grupo = 3;
        else if (peso <= 90)
            grupo = 2;
        else
            grupo = 1;
    }
    printf("Grupo de risco: %d\n", grupo);
    return 0;
}
