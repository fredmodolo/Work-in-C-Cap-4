#include <stdio.h>
int main () {
    float custofabrica, distribuidor, imposto, valorfinal;
    printf("Digite o custo de fabrica: ");
    scanf("%f", &custofabrica);
    if (custofabrica <= 12000)
    {
        valorfinal = custofabrica + (custofabrica*0.05);
        printf("O valor final do carro é de: %.2f\n", valorfinal);
    }
    else if (12000 < custofabrica && custofabrica < 25000 )
    {
        valorfinal = custofabrica + (custofabrica*0.1) + (custofabrica*0.15);
        printf("O valor final do carro é de: %.2f\n", valorfinal);
    }
    else if (custofabrica > 25000)
    {
        valorfinal = custofabrica + (custofabrica*0.15) + (custofabrica*0.2);
        printf("O valor final do carro é de: %.2f\n", valorfinal);
    }
    return 0;
}