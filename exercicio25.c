#include <stdio.h>
int main() {
    int horasextras, horasfaltas, H;
    float premio;
    printf("Digite o número de minutos de horas extras: ");
    scanf("%d", &horasextras);
    printf("Digite o número de minutos de horas faltadas: ");
    scanf("%d", &horasfaltas);
    H = horasextras - ((2 * horasfaltas) / 3);
    if (H >= 2400)
        premio = 500.00;
    else if (H >= 1800)
        premio = 400.00;
    else if (H >= 1200)
        premio = 300.00;
    else if (H >= 600)
        premio = 200.00;
    else
        premio = 100.00;
    printf("O valor do prêmio é: R$ %.2f\n", premio);
    return 0;
}