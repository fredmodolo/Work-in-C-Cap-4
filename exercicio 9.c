#include <stdio.h>
int main () {
    float basemenor, basemaior, altura, resultado;
    printf("Digite o valor da base menor do trapésio: ");
    scanf("%f", &basemenor);
    printf("Digite o valor da base maior do trapésio: ");
    scanf("%f", &basemaior);
    printf("Digite o valor da altura do trapésio: ");
    scanf("%f", &altura);
    resultado = ((basemaior + basemenor) * altura) / 2;
    printf("A área do trapésio é de: %0.2f\n", resultado);
    return 0;

}