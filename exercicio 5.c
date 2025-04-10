#include <stdio.h>
int main () {
    float preco, precofinal;
    printf("Digite o valor do produto: ");
    scanf("%f", &preco);
    precofinal = preco - (preco*0.1);
    printf("O valor após o desconto é de: %.2f\n", precofinal);
    return 0;
}