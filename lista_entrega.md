# Frederico Modolo
## Lista de exercícios em C

This repository contains the exercises made for the C Programming discipline.

## Exercícios

### Exercício 1:
```c
#include <stdio.h>
int main () {
    float n1, n2, resultado;
    printf("Digite dois números: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    resultado = (n1 - n2);
    printf("O resultado é de: %0.1f\n", resultado);
    return 0;
}
```

### Exercício 2:
```c
 #include <stdio.h>
int main () {
    float n1, n2, n3, resultado;
    printf("Digite 3 números: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    resultado = (n1*n2*n3);
    printf("O resultado é de: %0.1f\n", resultado);
    return 0;
}
```

### Exercício 3:
```c
#include <stdio.h>
int main () {
    float n1, n2, resultado;
    printf("Digite 2 número diferentes de 0: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    resultado = n1/n2;
        printf("O resultado é de: %0.2f\n", resultado);
        if (n1 == 0 || n2 == 0) {
        printf("Opção inválida!");
    }
    return 0;
}
```

### Exercício 4:
```c
#include <stdio.h>
int main () {
    float p1, p2, media;
    printf("Digite a nota da P1: ");
    scanf("%f", &p1);
    printf("Digite a nota da P2: ");
    scanf("%f", &p2);
    media = ((p1 * 2) + (p2 * 3)) / 5;
    printf("A média final é de: %.2f\n", media);
    return 0;
}
```

### Exercício 5:
```c
#include <stdio.h>
int main () {
    float preco, precofinal;
    printf("Digite o valor do produto: ");
    scanf("%f", &preco);
    precofinal = preco - (preco*0.1);
    printf("O valor após o desconto é de: %.2f\n", precofinal);
    return 0;
}
```

### Exercício 6:
```c
#include <stdio.h>
int main () {
    float salario, comissao, resultado;
    printf("Digite o seu salário: ");
    scanf("%f", &salario);
    printf("Digite o valor das vendas: ");
    scanf("%f", &comissao);
    resultado = salario + (comissao*0.4);
    printf("O salario final é de %0.2f", resultado);
    return 0;
}
```

### Exercício 7:
```c
#include <stdio.h>
int main () {
    float peso, pesoengordar, pesoemaagrecer;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    pesoengordar = peso + (peso*0.15);
    printf("O seu peso final se vc engordar 15% é de: %0.2f\n", pesoengordar);
    pesoemaagrecer = peso - (peso*0.2);
    printf("O seu peso final se vc emagrecer 20% é de: %0.2f\n", pesoemaagrecer);
    return 0;
}
```

### Exercício 8:
```c
#include <stdio.h>
int main () {
    float pesoemkg, pesoemgramas;
    printf("Digite seu peso em kilogramas(KG): ");
    scanf("%f", &pesoemkg);
    pesoemgramas = pesoemkg * 1000;
    printf("O seu peso em gramas é: %.2f gramas\n", pesoemgramas);
    return 0;
}
```

### Exercício 9:
```c
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
```

### Exercício 10:
```c
#include <stdio.h>
int main () {
    float lado, resultado;
    printf("Digite o valor dos lados do quadradado: ");
    scanf("%f", &lado);
    resultado = lado * lado;
    printf("A área do quadrado será de: %0.2f\n", resultado);
    return 0;
}
```

### Exercício 11:
```c
#include <stdio.h>
int main () {
    float diagonalmaior, diagonalmenor, resultado;
    printf("Digite o valor da diagonal maior do losango: ");
    scanf("%f", &diagonalmaior);
    printf("Digite o valor da diagonal menor do losango: ");
    scanf("%f", &diagonalmenor);
    resultado = (diagonalmaior*diagonalmenor)/2;
    printf("A área do losango será de: %0.2f\n", resultado);
    return 0;
}
```

### Exercício 12:
```c
#include <stdio.h>
int main () {
    float salariominimo, salario, total;
    salariominimo = 1000;
    printf("Digite o seu salário: ");
    scanf("%f", &salario);
    total = salario / salariominimo;
    printf("Você recebe %0.2f salários minímos.", total);
    return 0;
}
```

### Exercício 13:
```c
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
```

### Exercício 14:
```c
#include <stdio.h>
int main () {
    float idade, meses, dias, semanas;
    printf("Digite sua idade: ");
    scanf("%f", &idade);
    printf("Você tem %0.2f anos\n", idade);
    meses = idade * 12;
    printf("Você tem %0.2f meses\n", meses);
    dias = idade * 365;
    printf("Você tem %0.2f dias\n", dias);
    semanas = dias / 7;
    printf("Você tem %0.2f semanas\n", semanas);
    return 0;

}
```

### Exercício 15:
```c
#include <stdio.h>
int main () {
    float salariojoao, multa1, multa2, salariofinal;
    printf("Digite o salário de João: ");
    scanf("%f", &salariojoao);
    printf("Digite o valor das multas: ");
    scanf("%f", &multa1);
    scanf("%f", &multa2);
    salariofinal = salariojoao - (multa1 + (multa1*0.02)) - (multa2 + (multa2*0.02));
    printf("O salário final de João vai ser de: %0.2f reais", salariofinal);
    return 0;
}
```

### Exercício 16:
```c
#include <stdio.h>
#include <math.h>
int main () {
    float cateto1, cateto2, hipotenusa;
    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);
    printf("Digite o valora do segundo cateto: ");
    scanf("%f", &cateto2);
    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));
    printf("A hipotenusa é: %.2f\n", hipotenusa);
    return 0;
}
```

### Exercício 17:
```c
#include <stdio.h>
int main () {
    float raio, comprimento, area, volume;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    comprimento = 2 * 3.14 * raio;
    printf("O comprimento da esfera é de: %0.2f\n ", comprimento);
    area = 3.14 * (raio * raio);
    printf("A área da esfera é de: %0.2f\n", area);
    volume = 1/4 * 3.14 * raio;
    printf("O volume da esfera é de: %0.2f\n ", volume);
    return 0;
}
```

### Exercício 18:
```c
#include <stdio.h>
int main () {
    float celsius, fahrenheit;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = 180*(celsius+32)/100;
    printf("A temperatura digitada em Fahrenheit é: %0.2f", fahrenheit);
    return 0;
}
```

### Exercício 19:
```c
#include <stdio.h>
int main () {
    float medida1, medida2, area, iluminacao;
    printf("Digite a primeira medida do cômodo: ");
    scanf("%f", &medida1);
    printf("Digite a segunda medida do cômodo: ");
    scanf("%f", &medida2);
    area = medida1 * medida2;
    printf("\nA área do cômodo é de: %0.2f metros", area);
    iluminacao = area * 18;
    printf("\nDevera ser ultizada %0.2f W de potência", iluminacao);
    return 0;

}
```

### Exercício 20:
```c
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
```

### Exercício 21:
```c
#include <stdio.h>
int main () {
    float horastrabalhadas, salariominimo, horasextras, resultadoa, resultadob, salariobruto, quantia, salario;
    salariominimo = 1000;
    printf("Digite as horas trabalhadas: ");
    scanf("%f", &horastrabalhadas);
    printf("Digite as horas extras trabalhadas: ");
    scanf("%f", &horasextras);
    resultadoa = horastrabalhadas = (salariominimo*1/8);
    printf("\nO resultado é de: %0.2f", resultadoa);
    resultadob = horasextras = (salariominimo*1/4);
    printf("\nO resultado é de: %0.2f", resultadob);
    salariobruto = horastrabalhadas * resultadoa;
    printf("\nO salário bruto é de: %0.2f", salariobruto);
    quantia = horastrabalhadas * resultadob;
    printf("\nA quantia a receber é de: %0.2f reais", quantia);
    salario = salariobruto + quantia;
    printf("\nO salário a receber é de: %0.2f reais", salario);
    return 0;

}
```

### Exercício 22:
```c
#include <stdio.h>
int main () {
    float N, Nd;
    printf("Digite o número de lados do polígono convexo: ");
    scanf("%f", &N);
    Nd = N * (N-3)/2;
    printf("O número de diagonais é de: %0.2f", Nd);
    return 0;
}
```

### Exercício 23:
```c
#include <stdio.h>
int main () {
    float angulo1, angulo2, angulo3;
    printf("Digite o valor do primeiro angulo: ");
    scanf("%f", &angulo1);
    printf("Digite o valor do segundo angulo: ");
    scanf("%f", &angulo2);
    angulo3 = 180 - (angulo1+angulo2);
    printf("O valor do terceiro angulo é de: %0.2f", angulo3);
    return 0;

}
```

### Exercício 24:
```c
#include <stdio.h>
int main () {
    float reais, dolar, marco, libra;
    printf("Digite o valor em reais (R$): ");
    scanf("%f", &reais);
    dolar = reais / 1.80;
    marco = reais / 2.00;
    libra = reais / 3.57;
    printf("\nCom R$ %.2f você pode comprar:\n", reais);
    printf("-> %.2f dólares\n", dolar);
    printf("-> %.2f marcos alemães\n", marco);
    printf("-> %.2f libras esterlinas\n", libra);
    return 0;
}
```

### Exercício 25:
```c
int main() {
    int hora, minutos, total_minutos, total_segundos;
    printf("Digite a hora: ");
    scanf("%d", &hora);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    int hora_em_minutos = hora * 60;
    total_minutos = hora_em_minutos + minutos;
    total_segundos = total_minutos * 60;
    printf("\nA hora digitada em minutos: %d\n", hora_em_minutos);
    printf("Total de minutos: %d\n", total_minutos);
    printf("Total em segundos: %d\n", total_segundos);
    return 0;
}
```