#include <stdio.h>
#include <string.h>


// 1. Operações Aritméticas com Variáveis

/*
int main(void) {
    int num1 = 1;
    int num2 = 2;

    int resultado = num1 + (num2 * num2);
    printf("O resultado eh: %d\n", resultado);

    int media = resultado / 2;
    printf("O media dos numeros eh: %d\n", media);

    int modulo = num1 % num2 - num2 % num1;
    printf("Modulo dos numeros eh: %d\n", modulo);
*/


//--------------------------------------------------------

// 2. Maior e Menor Valor


/*
int main(void) {

int num1 = 1, num2 = 2, num3 = 3;

if (num1 > num2 && num1 > num3) {
    printf("num1 maior : %d", num1);
} else if (num2 > num1 && num2 > num3) {
    printf("num2 maior : %d", num2);
} else {
    printf("num3 maior : %d", num3);
}
*/

//--------------------------------------------------------

// 3. Cálculo de Salário com Comissão

/*
int main(void) {
    float salario = 0.0;
    float vendas = 0.0;
    char nome[50];

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite seu salario: \n");
    scanf("%f", &salario);

    printf("Digite total de vendas: \n");
    scanf("%f", &vendas);

    float salarioComComissao = salario + (vendas * 0.05);

    printf("Funcionario : %s  \n", nome);
    printf("Salario com comissao : %.2f \n", salarioComComissao);
*/

//--------------------------------------------------------

// 4. Desconto do INSS por Faixa Salarial

/*
    int main(void) {
        float salario = 0;

        char nome[50];

        printf("Digite seu nome: \n");
        scanf("%s", &nome);

        printf("Digite seu salario: \n");
        scanf("%f", &salario);

        if (salario <= 1200.00) {
            printf("Salario até R$ 1.200,00 : desconto de 7,5\n");
            printf("Nome : %s\n ", nome);
            printf("Salario Bruto : R$ %.2f \n",salario);
            printf("Salario teve desconto de 7.5 porcento %.2f \n", salario * 0.925);
        }else if (salario >= 1200.01 && salario < 2000.00) {
            printf("Salario entre R$ 1.200,01 e R$ 2.000,00 : desconto de 9 porcento \n");
            printf("Nome :%s \n", nome);
            printf("Salario Bruto : R$ %.2f \n",salario);
            printf("Salario teve desconto de 9 porcento %.2f \n", salario * 0.91);
        }else {
            printf("Salario acima de R$ 2.000,00 : desconto de 10 \n");
            printf("Nome :%s \n", nome);
            printf("Salario Bruto : R$ %.2f \n",salario);
            printf("Salario teve desconto de 10 porcento %.2f \n", salario * 0.90);
        }
*/
//--------------------------------------------------------------------------------------------

// 5. Contagem de Números Ímpares

/*
int main(void) {

    for (int i = 1; i <= 200; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
    */

//--------------------------------------------------------------------------------------------


// 6. Cálculo de Potência

/*

int potencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("%d elevado a %d e %lld\n", base, expoente, potencia(base, expoente));


    */
//--------------------------------------------------------------------------------------------

// 7. Tabuada de Números Primos


/*
int main() {
    int opcao;

    printf("Escolha uma das tabuadas \n");
    printf(" 1 - Tabuada do 2 \n");
    printf(" 2 - Tabuada do 3 \n");
    printf(" 3 - Tabuada do 5 \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Tabuada do 2 \n");
        for (int i = 1; i <= 10; i++) {
            printf("2 * %d = %d\n", i, 2 * i);
        }
        break;
        case 2:
            printf("Tabuada do 3 \n");
        for (int i = 1; i <= 10; i++) {
            printf("3 * %d = %d\n", i, 3 * i);
        }
        break;
        case 3:
            printf("Tabuada do 5 \n");
        for (int i = 1; i <= 10; i++) {
            printf("5 * %d = %d\n", i, 5 * i);
        }
        break;
        default:
            printf("Opção inválida!\n");
    }
    */

//--------------------------------------------------------------------------------------------

// 7. Cálculo do Fatorial

/*
int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int num;

    printf("Digite um numero para calculo fatorial: \n");
    scanf("%d", &num);

    printf("Fatorial de %d e %d\n", num, fatorial(num));
*/

// 8. Série de Fibonacci

/*
void fibonacci(int n) {
    int a = 0, b = 1, temp;

    printf("fibonacci(%d) termo : ", n);

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        temp = a;
        a = b;
        b = temp + b;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Digite um numero para a sequencia de Fibonacci: ");
    scanf("%d", &n);


    fibonacci(n);
    */

//--------------------------------------------------------------------------------------------

//8. Manipulação de Strings

/*
int main() {
    char nome1[] = "Robson";
    char nome2[] = "Matheus";

    int tamanho1 = strlen(nome1);
    int tamanho2 = strlen(nome2);

    printf("nome : %s\n", nome1);
    printf("Numero de caracteres : %d\n", tamanho1);

    printf("nome : %s\n", nome2);
    printf("Numero de caracteres : %d\n", tamanho2);


    return 0;
}
*/