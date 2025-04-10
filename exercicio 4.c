#include <stdio.h>
int main () {
    float p1, p2, media;
    printf("Digite a nota da P1: ");
    scanf("%f", &p1);
    printf("Digite a nota da P2: ");
    scanf("%f", &p2);
    media = ((p1 * 2) + (p2 * 3)) / 5;
    printf("A média final é de: %.2f\n", media);
    return 0;
}