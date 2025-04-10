#include <stdio.h>
int main () {
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    if (idade < 5)
    {
        printf("O nadador não tem idade para nenhuma categoria.");
    }
    else if (idade > 5 && idade <= 7)
    {
        printf("O nadador é da categoria Infantil");
    }
    else if (idade > 8 && idade <= 10)
    {
        printf("O nadador é da categoria Juvenil");
    }
    else if (idade > 11 && idade <= 15)
    {
        printf("O nadador é da categoria Adolescente");
    }
    else if (idade > 16 && idade <= 30)
    {
        printf("O nadador é da categoria Adulto");
    }
    else if (idade > 30)
    {
        printf("O nadador é da categoria Sênior");
    }
    return 0;
}