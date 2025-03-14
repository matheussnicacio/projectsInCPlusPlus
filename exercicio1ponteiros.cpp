#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//1.Construa um programa para calcular uma equação de segundo grau, onde x' e x'' deverão ser um ponteiro, imprima o valor de x' e x'' após a execução do programa.

void calculo(double a, double b, double c, double *x1, double *x2, int *temRaizesReais) {

	double delta = b * b - 4 * a * c;

	if (delta < 0) {
		*temRaizesReais = 0;
	} else {
		*temRaizesReais = 1;
		*x1 = (-b + sqrt(delta)) / (2 * a);
		*x2 = (-b - sqrt(delta)) / (2 * a);
		
		// Pesquisei sobre o SQRT, vem da biblioteca math.h e retorna raiz quadrada
	}      
}

int main (void) {

	double a, b, c;
	double raiz1, raiz2;
	int temRaizesReais;


	printf("Digite os coeficientes a, b, c : ");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a == 0) {
		printf("Nao e uma equacao do segundo grau! \n");
		return 1;
	}

	calculo (a, b, c, &raiz1, &raiz2, &temRaizesReais);

	if (temRaizesReais) {
		printf("As raizes da equacao sao: x1 = %.2lf e x2 = %.2lf \n", raiz1, raiz2);
	} else {
		printf("A equacao nao possui raizes reais. \n");
	}



	return 0;
}

