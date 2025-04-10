#include <stdio.h>
int main () {
    float preco, novopreco;
    printf("Digite o preço do produto em reais: ");
    scanf("%f", &preco);
    if (preco <= 50)
    {
        novopreco = preco + (preco*0.05);
        printf("O novo preço do produto é de: %.2f reais\n", novopreco);
    }
    else if (preco > 50 && preco < 100)
    {
        novopreco = preco + (preco*0.1);
        printf("O novo preço do produto é de: %.2f reais\n", novopreco);
    }
    else if (preco >= 100)
    {
        novopreco = preco + (preco*0.15);
        printf("O novo preço do produto é de: %.2f reais\n", novopreco);
    }
    if (novopreco <= 80)
    {
        printf("\nClassificação: Barato");
    }
    else if (novopreco > 80 && novopreco < 120)
    {
        printf("\nClassificação: Normal");
    }
    else if (novopreco > 120 && novopreco < 200)
    {
        printf("\nClassificação: Caro");
    }
    else if (novopreco >= 200)
    {
        printf("\nClassificação: Muito Caro");
    }
    return 0;
}