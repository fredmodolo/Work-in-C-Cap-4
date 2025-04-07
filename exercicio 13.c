#include <stdio.h>
int main () {
    int n1, i;
    printf("Digite o número desejado: ");
    scanf("%d", &n1);
    printf("\nTabuada do %d:\n", n1);
    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n1, i, n1 * i);
    }
    return 0;
}