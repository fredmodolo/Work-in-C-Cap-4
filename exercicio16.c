#include <stdio.h>
int main () {
    float preco, precofinal;
    printf("Digite o valor atual do produto: ");
    scanf("%f", &preco);
    if (preco <= 30)
    {
        precofinal = preco;
        printf("O preço final é de: %.2f", &precofinal);
    }
    else if (preco > 30 && preco < 100)
    {
        precofinal = preco - (preco*0.1);
        printf("O preço final é de: %.2f", precofinal);
    }
    else if (preco > 100)
    {
        precofinal = preco - (preco*0.15);
        printf("O preço final é de: %.2f", precofinal);
    }
    return 0;
}