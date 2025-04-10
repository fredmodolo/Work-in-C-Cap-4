#include <stdio.h>
int main () {
    float n1, n2, resultado;
    int opcao;
    printf("\nPrograma Calculadora");
    printf("\n--------------------");
    printf("\nEscolha uma opção");
    printf("\n1- Média");
    printf("\n2- Diferença");
    printf("\n3- Produto");
    printf("\n4- Divisão");
    scanf("%d", &opcao);
    printf("Escolha dois números: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    if (opcao == 1) 
    {
        resultado = (n1 + n2) / 2;
        printf("\nO resultado é: %0.2f", resultado);
    }
    if (opcao == 2)
    {
        if (n1>n2)
        {
            resultado = (n1 - n2);
       }
       if (n2 > n1){
           resultado = (n2 - n1);
       }
       if (n1 == n2){
           resultado = (n2 - n1);
       }
       if (n2 == 0) {
    printf("Erro: Divisão por zero não permitida!\n");
}
       printf("\nDiferenca = %0.2f",resultado); 
    }
    if (opcao == 3)
    {
        resultado = n1 * n2;
        printf("\nO resultado é: %0.2f", resultado);
    }
    if (opcao == 4)
    {
        resultado = n1 / n2;
        printf("\nO resultado é: %0.2f", resultado);
    }
    else if (opcao > 4) {
        printf("\nOpção inválida!");
    }
    return 0;
    }