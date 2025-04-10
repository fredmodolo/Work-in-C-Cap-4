#include <stdio.h>
int main () {
    float senha, senhareal;
    printf("Digite a senha: ");
    scanf("%f", &senha);
    if (senha == 4531)
    {
        printf("Senha correta!");
    }
    else {
        printf("Senha incorreta!");
    }
    return 0;
}