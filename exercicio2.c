#include <stdio.h>
int main () {
     float n1, n2, md;
   printf("\nCalculo de Medias");
   printf("\n----------------");
   printf("\nDigite a nota da prova P1:");
   scanf("%f",&n1);
   printf("\nDigite a nota da prova P2:");
   scanf("%f",&n2);
   md = (n1 + n2)/2;
   if (md >=0 && md<3){
      printf("\nAluno esta reprovado com media = %0.1f",md);
   }
   if (md >=3 && md<7){
      printf("\nAluno esta de Exame com media = %0.1f",md);
   }
    if (md >=7 && md<=10){
    printf("\nAluno esta aprovado com media = %0.1f",md);
 }
   return 0;
}