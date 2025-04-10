#include <stdio.h>
int main () {
 float n1, n2;
 printf("Digite dois números: ");
 scanf("%f", &n1);   
 scanf("%f", &n2);
 if (n1>n2) {
 printf("\nO menor número é o %0.2f", n2);
 }
 else if (n1<n2) {
 printf("\nO menor número é o %0.2f", n1);
 }
 else {
   printf("\nOs números são iguais");
 }
  return 0;
}