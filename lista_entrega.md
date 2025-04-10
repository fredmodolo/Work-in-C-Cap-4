# Frederico Modolo Esteves
Lista Exercícios em C -  Capítulo 4
## Exercício 01:
```c
#include <stdio.h>
int main () {
    float n1, n2, n3, n4, md;
    printf("Digite a nota da P1: ");
    scanf("%f", &n1);
    printf("Digite a nota da P2: ");
    scanf("%f", &n2);
    printf("Digite a nota da P3: ");
    scanf("%f", &n3);
    printf("Digite a nota da P4: ");
    scanf("%f", &n4);
    md = (n1+n2+n3+n4)/4;
    if (md>=7) {
        printf("Você foi aprovado! Média: %0.1f",md);
    }
    else {
        printf("Você foi reprovado! Média: %0.1f",md);
        return 0;
    }
}
```

## Exercício 2:
```c
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
```

## Exercício 3:
```c
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
```

## Exercício 4:
```c
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
```

## Exercício 5:
```c
#include <stdio.h>
int main () {
    float n1, n2, resultado;
    int opcao;
    printf("\nPrograma Calculadora");
    printf("\n--------------------");
    printf("\nEscolha uma opção");
    printf("\n1- Média");
    printf("\n2- Diferença");
    printf("\n3- Produto");
    printf("\n4- Divisão");
    scanf("%d", &opcao);
    printf("Escolha dois números: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    if (opcao == 1) 
    {
    resultado = (n1 + n2) / 2;
    printf("\nO resultado é: %0.2f", resultado);
    }
    if (opcao == 2)
    {
    if (n1>n2)
    {
        resultado = (n1 - n2);
   }
   if (n2 > n1){
       resultado = (n2 - n1);
   }
   if (n1 == n2){
   resultado = (n2 - n1);
   }
   if (n2 == 0) {
printf("Erro: Divisão por zero não permitida!\n");
}
   printf("\nDiferenca = %0.2f",resultado); 
}
if (opcao == 3)
{
    resultado = n1 * n2;
    printf("\nO resultado é: %0.2f", resultado);
}
if (opcao == 4)
{
    resultado = n1 / n2;
    printf("\nO resultado é: %0.2f", resultado);
}
else if (opcao > 4) {
    printf("\nOpção inválida!");
}
return 0;
}
```

## Exercício 6:
```c
#include <stdio.h>
#include <math.h>
int main () {
    float n1,n2, resultado, raiz1, raiz2;
    int opcao;
    printf("\nEscolha opção: ");
    printf("\n1- Primeiro número elevado ao segundo");
    printf("\n2- Raiz quadrada");
    printf("\n3- Raiz cúbica");
    scanf("%d", &opcao);
    printf("Digite dois números");
    scanf("%f", &n1);
    scanf("%f", &n2);
    if (opcao == 1)
    {
        resultado = pow(n1,n2);
        printf("Resultado: %.2f\n", resultado);
    }
    else if (opcao == 2)
    {
        raiz1 = sqrt(n1);
        raiz2 = sqrt(n2);
        printf("Raiz quadrada de %.2f = %.2f\n", n1, raiz1);
        printf("Raiz quadrada de %.2f = %.2f\n", n2, raiz2);
    }
    else if (opcao == 3)
    {
        raiz1 = cbrt(n1);
        raiz2 = cbrt(n2);
        printf("Raiz cúbica de %.2f = %.2f\n", n1, raiz1);
        printf("Raiz cúbica de %.2f = %.2f\n", n2, raiz2);
    }
    else {
        printf("Opção inválida");
    }
    return 0;
}
```

## Exercício 7:
```c
#include <stdio.h>
int main () {
    float salario, resultado;
    printf("Digite seu salário: ");
    scanf("%f", &salario);
    if (salario < 500)
    {
        resultado = salario + (0.3*salario);
        printf("O seu salario com aumento é de: %.2f", resultado);
    }
    else if (salario > 500)
    {
        printf("Você não tem direito a aumento.");
    }
    return 0;
}
```

## Exercício 8:
```c
#include <stdio.h>
int main () {
    float salario, resultado;
    printf("Digite o salário: ");
    scanf("%f", &salario);
    if (salario <= 300)
    {
        resultado = salario + (salario*0.35);
        printf("O salário com aumento é de: %.2f", resultado);
    }
    else if (salario > 300)
    {
        resultado = salario + (salario*0.15);
        printf("O salário com aumento é de: %.2f", resultado);
    }
    return 0;
}
```

## Exercício 9:
```c
#include <stdio.h>
int main () {
    float saldo, aumento;
    printf("Digite o saldo médio: ");
    scanf("%f", &saldo);
    if (saldo > 400)
    {
        aumento = saldo + (saldo*0.3);
        printf("O resultado é de: %.2f, e o crédito é de %.2f", aumento, saldo*0.3);
    }
    else if (saldo <= 400 && saldo > 300)
    {
        aumento = saldo + (saldo*0.25);
        printf("O resultado é de: %.2f, e o crédito é de %.2f", aumento, saldo*0.25);
    }
    else if (saldo <= 300 && saldo > 200)
    {
        aumento = saldo + (saldo*0.2);
        printf("O resultado é de: %.2f, e o crédito é de %.2f", aumento, saldo*0.2);
    }
    else if (saldo <= 200)
    {
        aumento = saldo + (saldo*0.1);
        printf("O resultado é de: %.2f, e o crédito é de %.2f", aumento, saldo*0.1);
    }
    return 0;
}
```

## Exercício 10:
```c
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
```

## Exercício 11:
```c
#include <stdio.h>
int main () {
    float salario, salariofinal;
    printf("Digite o salário: ");
    scanf("%f", &salario);
    if (salario <= 300)
    {
        salariofinal = salario + (salario*0.15);
        printf("O salário final é de: %.2f", salariofinal);
    }
    else if (salario > 300 && salario < 600)
    {
        salariofinal = salario + (salario*0.1);
        printf("O salário final é de: %.2f", salariofinal);
    }
    else if (salario >= 600 && salario <= 900)
    {
        salariofinal = salario + (salario*0.05);
        printf("O salário final é de: %.2f", salariofinal);
    }
    else if (salario > 900)
    {
        salariofinal = salario;
        printf("O salário final é de: %.2f", salariofinal);
    }
    return 0;
}
```

## Exercício 12:
```c
#include <stdio.h>
int main () {
    float salariobruto, aumento, salariofinal;
    printf("Digite o salário bruto: ");
    scanf("%f", &salariobruto);
    if (salariobruto <= 350)
    {
        aumento = 100;
        salariofinal = salariobruto + aumento - (salariobruto*0.07);
        printf("O salário final será de: %.2f", salariofinal);
    }
    else if (salariobruto > 350 && salariobruto < 600)
    {
        aumento = 75;
        salariofinal = salariobruto + aumento - (salariobruto*0.07);
        printf("O salário final será de: %.2f", salariofinal);
    }
    else if (salariobruto >= 600 && salariobruto <= 900)
    {
        aumento = 50;
        salariofinal = salariobruto + aumento - (salariobruto*0.07);
        printf("O salário final será de: %.2f", salariofinal);
    }
    else if (salariobruto > 900)
    {
        aumento = 35;
        salariofinal = salariobruto + aumento - (salariobruto*0.07);
        printf("O salário final será de: %.2f", salariofinal);
    }
    return 0;
}
```

## Exercício 13:
```c
#include <stdio.h>
int main () {
    float preco, novopreco;
    printf("Digite o preço do produto em reais: ");
    scanf("%f", &preco);
    if (preco <= 50)
    {
        novopreco = preco + (preco*0.05);
        printf("O novo preço do produto é de: %.2f reais\n", novopreco);
    }
    else if (preco > 50 && preco < 100)
    {
        novopreco = preco + (preco*0.1);
        printf("O novo preço do produto é de: %.2f reais\n", novopreco);
    }
    else if (preco >= 100)
    {
        novopreco = preco + (preco*0.15);
        printf("O novo preço do produto é de: %.2f reais\n", novopreco);
    }
    if (novopreco <= 80)
    {
        printf("\nClassificação: Barato");
    }
    else if (novopreco > 80 && novopreco < 120)
    {
        printf("\nClassificação: Normal");
    }
    else if (novopreco > 120 && novopreco < 200)
    {
        printf("\nClassificação: Caro");
    }
    else if (novopreco >= 200)
    {
        printf("\nClassificação: Muito Caro");
    }
    return 0;
}
```

## Exercício 14:
```c
#include <stdio.h>
int main () {
    float salario, novosalario;
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);
    if (salario <= 300)
    {
        novosalario = salario + (salario*0.5);
        printf("O novo salário será de: %.2f", novosalario);
    }
    else if (salario > 300 && salario <= 500)
    {
        novosalario = salario + (salario*0.4);
        printf("O novo salário será de: %.2f", novosalario);
    }
    else if (salario > 500 && salario <= 700)
    {
        novosalario = salario + (salario*0.3);
        printf("O novo salário será de: %.2f", novosalario);
    }
    else if (salario > 700 && salario <= 800)
    {
        novosalario = salario + (salario*0.2);
        printf("O novo salário será de: %.2f", novosalario);
    }
    else if (salario > 800 && salario <= 1000)
    {
        novosalario = salario + (salario*0.1);
        printf("O novo salário será de: %.2f", novosalario);
    }
    else if (salario > 1000)
    {
        novosalario = salario + (salario*0.05);
        printf("O novo salário será de: %.2f", novosalario);
    }
    return 0;
}
```

## Exercício 15:
```c
#include <stdio.h>
int main () {
    float valor, resultado;
    int investimento;
    printf("Agência Bancária -  Escolha seu Investimento:");
    printf("\n1- Poupança: ");
    printf("\n2- Fundos de renda fixa: ");
    scanf("%d", &investimento);
    printf("\nDigite o valor do investimento: ");
    scanf("%f", &valor);
    if (investimento == 1)
    {
        resultado = valor + (valor*0.3);
        printf("\nO valor do investimento após 1 mês é de: %.2f", resultado);
    }
    if (investimento == 2)
    {
        resultado = valor + (valor*0.4);
        printf("\nO valor do investimento após 1 mês é de: %.2f", resultado);
    }
    return 0;
}
```

## Exercício 16:
```c
#include <stdio.h>
int main () {
    float preco, precofinal;
    printf("Digite o valor atual do produto: ");
    scanf("%f", &preco);
    if (preco <= 30)
    {
        precofinal = preco;
        printf("O preço final é de: %.2f", &precofinal);
    }
    else if (preco > 30 && preco < 100)
    {
        precofinal = preco - (preco*0.1);
        printf("O preço final é de: %.2f", precofinal);
    }
    else if (preco > 100)
    {
        precofinal = preco - (preco*0.15);
        printf("O preço final é de: %.2f", precofinal);
    }
    return 0;
}
```

## Exercício 17:
```c
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
```

## Exercício 18:
```c
#include <stdio.h>
int main () {
    float idade;
    printf("Digite sua idade: ");
    scanf("%f", &idade);
    if (idade >= 18)
    {
        printf("Você é maior de idade!");
    }
    else {
        printf("Você não é maior de idade.");
    }
    return 0;
}
```

## Exercício 19:
```c
#include <stdio.h>
int main () {
    float altura, peso;
    char sexo;
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
    printf("Escolha seu sexo: h (Homem) ou m (Mulher): ");
    scanf(" %c", &sexo);
    if (sexo == 'h')
    {
        peso = (72.7 * altura) - 58;
        printf("O seu peso ideal é de: %.2f kg", peso);
    }
    else if (sexo == 'm')
    {
        peso = (62.1 * altura) - 44.7;
        printf("O seu peso ideal é de: %.2f kg", peso);
    }
    else {
        printf("Sexo inválido. Digite 'h' para homem ou 'm' para mulher.\n");
    }
    return 0;
}
```

## Exercício 20:
```c
#include <stdio.h>
int main () {
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    if (idade < 5)
    {
        printf("O nadador não tem idade para nenhuma categoria.");
    }
    else if (idade > 5 && idade <= 7)
    {
        printf("O nadador é da categoria Infantil");
    }
    else if (idade > 8 && idade <= 10)
    {
        printf("O nadador é da categoria Juvenil");
    }
    else if (idade > 11 && idade <= 15)
    {
        printf("O nadador é da categoria Adolescente");
    }
    else if (idade > 16 && idade <= 30)
    {
        printf("O nadador é da categoria Adulto");
    }
    else if (idade > 30)
    {
        printf("O nadador é da categoria Sênior");
    }
    return 0;
}
```

## Exercício 21:
```c
#include <stdio.h>
int main () {
    float preco;
    int codigo;
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    printf("Digite o código de origem do produto: ");
    scanf("%d", &codigo);
    printf("Preço do produto: R$ %.2f\n", preco);
    if (codigo == 1) {
        printf("Procedência: Sul\n");
    }
    else if (codigo == 2) {
        printf("Procedência: Norte\n");
    }
    else if (codigo == 3) {
        printf("Procedência: Leste\n");
    }
    else if (codigo == 4) {
        printf("Procedência: Oeste\n");
    }
    else if (codigo == 5 || codigo == 6) {
        printf("Procedência: Nordeste\n");
    }
    else if (codigo == 7 || codigo == 8 || codigo == 9) {
        printf("Procedência: Sudeste\n");
    }
    else if (codigo >= 10 && codigo <= 20) {
        printf("Procedência: Centro-Oeste\n");
    }
    else if (codigo >= 21 && codigo <= 30) {
        printf("Procedência: Nordeste\n");
    }
    else {
        printf("Código de origem inválido!\n");
    }
    return 0;
}
```

## Exercício 22:
```c
#include <stdio.h>
int main() {
    int idade;
    float peso;
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);
    printf("Digite o peso da pessoa: ");
    scanf("%f", &peso);
    int grupo;
    if (idade < 20) {
        if (peso <= 60)
            grupo = 9;
        else if (peso <= 90)
            grupo = 8;
        else
            grupo = 7;
    }
    else if (idade <= 50) {
        if (peso <= 60)
            grupo = 6;
        else if (peso <= 90)
            grupo = 5;
        else
            grupo = 4;
    }
    else {
        if (peso <= 60)
            grupo = 3;
        else if (peso <= 90)
            grupo = 2;
        else
            grupo = 1;
    }
    printf("Grupo de risco: %d\n", grupo);
    return 0;
}
```

## Exercício 23:
```c
#include <stdio.h>
int main() {
    int codigo, quantidade;
    float preco_unitario, preco_total, desconto, preco_final;
    printf("Digite o código do produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);
    if (codigo >= 1 && codigo <= 10)
        preco_unitario = 10.0;
    else if (codigo >= 11 && codigo <= 20)
        preco_unitario = 15.0;
    else if (codigo >= 21 && codigo <= 30)
        preco_unitario = 20.0;
    else if (codigo >= 31 && codigo <= 40)
        preco_unitario = 30.0;
    else {
        printf("Código de produto inválido!\n");
        return 1;
    }
    preco_total = preco_unitario * quantidade;
    if (preco_total <= 250)
        desconto = preco_total * 0.05;
    else if (preco_total <= 500)
        desconto = preco_total * 0.10;
    else
        desconto = preco_total * 0.15;

    preco_final = preco_total - desconto;
    printf("Preço unitário: R$ %.2f\n", preco_unitario);
    printf("Preço total: R$ %.2f\n", preco_total);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Preço final com desconto: R$ %.2f\n", preco_final);
    return 0;
}
```

## Exercício 24:
```c
#include <stdio.h>
int main() {
    float preco, aumento = 0, imposto, novoPreco;
    int categoria;
    char situacao;
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Escolha uma opção: (1 - Limpeza, 2 - Alimentacao, 3 - Vestuario): ");
    scanf("%d", &categoria);
    printf("Digite a situacao (r - refrigeracao, n - nao refrigeracao): ");
    scanf(" %c", &situacao);
    if (preco <= 25) {
        if (categoria == 1) aumento = preco * 0.05;
        else if (categoria == 2) aumento = preco * 0.08;
        else if (categoria == 3) aumento = preco * 0.10;
    }
     else {
        if (categoria == 1) aumento = preco * 0.12;
        else if (categoria == 2) aumento = preco * 0.15;
        else if (categoria == 3) aumento = preco * 0.18;
    }
    if (categoria == 2 || situacao == 'R') imposto = preco * 0.05;
    else imposto = preco * 0.08;
    novoPreco = preco + aumento - imposto;
    printf("Novo preço: R$ %.2f\n", novoPreco);
    if (novoPreco <= 50)
        printf("Classificação: Barato\n");
    else if (novoPreco <= 120)
        printf("Classificação: Normal\n");
    else
        printf("Classificação: Caro\n");
    return 0;
}
```

## Exercício 25:
```c
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
```