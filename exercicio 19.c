#include <stdio.h>
int main () {
    float medida1, medida2, area, iluminacao;
    printf("Digite a primeira medida do cômodo: ");
    scanf("%f", &medida1);
    printf("Digite a segunda medida do cômodo: ");
    scanf("%f", &medida2);
    area = medida1 * medida2;
    printf("\nA área do cômodo é de: %0.2f metros", area);
    iluminacao = area * 18;
    printf("\nDevera ser ultizada %0.2f W de potência", iluminacao);
    return 0;

}