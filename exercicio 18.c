#include <stdio.h>
int main () {
    float celsius, fahrenheit;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = 180*(celsius+32)/100;
    printf("A temperatura digitada em Fahrenheit é: %0.2f", fahrenheit);
    return 0;
}