#include <stdlib.h>
#include <stdio.h>

//3. Construa um programa que contém duas variáveis inteiras, e cada uma destas variáveis deverá ter um valor atribuído nelas,
// através de uma entrada de dado do usuário. Também elaborem no mesmo programa três funções, que deveram usar o conceito de
// ponteiro para manipular a passagem dos dados para as funções. As funções deverão ter as seguintes funcionalidades:
// a soma das duas variáveis, a diferença entre as duas variáveis e a multiplicação das duas variáveis.


void soma (int a,int b, int *resultado) {

	*resultado = a + b;

}

void diferenca (int a,int b, int *resultado) {

	*resultado = a - b;

}

void multiplicacao (int a,int b, int *resultado) {

	*resultado = a * b;

}

int main (void) {

	int resultado;
	int a;
	int b;

	printf("Digite o primeiro numero \n");
	scanf("%d", &a);

	printf("Digite o segundo numero \n");
	scanf("%d", &b);


	soma (a, b, &resultado);

	printf("\n a soma do resultado e : \n %d", resultado);

	diferenca (a, b, &resultado);
	
	printf("\n a diferenca do resultado e : \n %d", resultado);

	multiplicacao (a, b, &resultado);

	printf("\n a multiplicacao do resultado e : \n %d", resultado);


	return 0;
}