#include <stdio.h>
int main () {
    float idade;
    printf("Digite sua idade: ");
    scanf("%f", &idade);
    if (idade >= 18)
    {
        printf("Você é maior de idade!");
    }
    else {
        printf("Você não é maior de idade.");
    }
    return 0;
}