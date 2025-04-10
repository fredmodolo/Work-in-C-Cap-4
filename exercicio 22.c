#include <stdio.h>
int main () {
    float N, Nd;
    printf("Digite o número de lados do polígono convexo: ");
    scanf("%f", &N);
    Nd = N * (N-3)/2;
    printf("O número de diagonais é de: %0.2f", Nd);
    return 0;
}