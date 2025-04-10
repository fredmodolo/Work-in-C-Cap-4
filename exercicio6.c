#include <stdio.h>
#include <math.h>
int main () {
    float n1,n2, resultado, raiz1, raiz2;
    int opcao;
    printf("\nEscolha opção: ");
    printf("\n1- Primeiro número elevado ao segundo");
    printf("\n2- Raiz quadrada");
    printf("\n3- Raiz cúbica");
    scanf("%d", &opcao);
    printf("Digite dois números");
    scanf("%f", &n1);
    scanf("%f", &n2);
    if (opcao == 1)
    {
        resultado = pow(n1,n2);
        printf("Resultado: %.2f\n", resultado);
    }
    else if (opcao == 2)
    {
        raiz1 = sqrt(n1);
        raiz2 = sqrt(n2);
        printf("Raiz quadrada de %.2f = %.2f\n", n1, raiz1);
        printf("Raiz quadrada de %.2f = %.2f\n", n2, raiz2);
    }
    else if (opcao == 3)
    {
        raiz1 = cbrt(n1);
        raiz2 = cbrt(n2);
        printf("Raiz cúbica de %.2f = %.2f\n", n1, raiz1);
        printf("Raiz cúbica de %.2f = %.2f\n", n2, raiz2);
    }
    else {
        printf("Opção inválida");
    }
    return 0;
}
