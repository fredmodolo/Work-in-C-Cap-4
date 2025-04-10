#include <stdio.h>
int main () {
    float n1, n2, n3, n4, md;
    printf("Digite a nota da P1: ");
    scanf("%f", &n1);
    printf("Digite a nota da P2: ");
    scanf("%f", &n2);
    printf("Digite a nota da P3: ");
    scanf("%f", &n3);
    printf("Digite a nota da P4: ");
    scanf("%f", &n4);
    md = (n1+n2+n3+n4)/4;
    if (md>=7) {
        printf("Você foi aprovado! Média: %0.1f",md);
    }
    else {
        printf("Você foi reprovado! Média: %0.1f",md);
        return 0;
    }
}