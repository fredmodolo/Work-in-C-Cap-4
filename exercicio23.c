#include <stdio.h>
int main() {
    int codigo, quantidade;
    float preco_unitario, preco_total, desconto, preco_final;
    printf("Digite o código do produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);
    if (codigo >= 1 && codigo <= 10)
        preco_unitario = 10.0;
    else if (codigo >= 11 && codigo <= 20)
        preco_unitario = 15.0;
    else if (codigo >= 21 && codigo <= 30)
        preco_unitario = 20.0;
    else if (codigo >= 31 && codigo <= 40)
        preco_unitario = 30.0;
    else {
        printf("Código de produto inválido!\n");
        return 1;
    }
    preco_total = preco_unitario * quantidade;
    if (preco_total <= 250)
        desconto = preco_total * 0.05;
    else if (preco_total <= 500)
        desconto = preco_total * 0.10;
    else
        desconto = preco_total * 0.15;

    preco_final = preco_total - desconto;
    printf("Preço unitário: R$ %.2f\n", preco_unitario);
    printf("Preço total: R$ %.2f\n", preco_total);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Preço final com desconto: R$ %.2f\n", preco_final);
    return 0;
}