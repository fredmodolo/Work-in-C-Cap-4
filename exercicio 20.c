#include <stdio.h>
#include <math.h>
int main() {
    float angulo, distancia, medida_escada;
    printf("Digite o ângulo em graus entre a escada e o chão: ");
    scanf("%f", &angulo);
    printf("Digite a distância da escada até a parede (em metros): ");
    scanf("%f", &distancia);
    float radianos = angulo * (3.14 / 180);
     medida_escada = distancia / cos(radianos);
     printf("A medida da escada deve ser: %.2f metros\n", medida_escada);
     return 0;
}