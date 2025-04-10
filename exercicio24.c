#include <stdio.h>
int main() {
    float preco, aumento = 0, imposto, novoPreco;
    int categoria;
    char situacao;
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Escolha uma opção: (1 - Limpeza, 2 - Alimentacao, 3 - Vestuario): ");
    scanf("%d", &categoria);
    printf("Digite a situacao (r - refrigeracao, n - nao refrigeracao): ");
    scanf(" %c", &situacao);
    if (preco <= 25) {
        if (categoria == 1) aumento = preco * 0.05;
        else if (categoria == 2) aumento = preco * 0.08;
        else if (categoria == 3) aumento = preco * 0.10;
    }
     else {
        if (categoria == 1) aumento = preco * 0.12;
        else if (categoria == 2) aumento = preco * 0.15;
        else if (categoria == 3) aumento = preco * 0.18;
    }
    if (categoria == 2 || situacao == 'R') imposto = preco * 0.05;
    else imposto = preco * 0.08;
    novoPreco = preco + aumento - imposto;
    printf("Novo preço: R$ %.2f\n", novoPreco);
    if (novoPreco <= 50)
        printf("Classificação: Barato\n");
    else if (novoPreco <= 120)
        printf("Classificação: Normal\n");
    else
        printf("Classificação: Caro\n");
    return 0;
}