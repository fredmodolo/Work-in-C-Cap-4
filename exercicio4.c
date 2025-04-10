#include <stdio.h>
int main () {
    float n1, n2, n3;
    printf("Digite três números: ");
 scanf("%f", &n1);   
 scanf("%f", &n2);
 scanf("%f", &n3);
 if (n1>n2,n3) {
    printf("O maior número é o %0.2f", n1);
 }
 else if (n2>n1,n3) {
    printf("O maior número é o %0.2f", n2);
 }
 else if (n3>n1, n2)
 {
    printf("O maior número é o %0.2f", n3);
 }
 return 0;
}