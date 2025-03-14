#include <stdio.h>
#include <stdlib.h>

//4. Faça um programa que peça um número para calcular o fatorial. Deve tem uma função para calcular o fatorial (por referência).


void fatorial (int n, long long *resultado) {

	if (n<=1) {
		*resultado = 1;
	} else {
		long long temp;
		fatorial (n - 1,&temp);
		*resultado = n * temp;
	}

}

int main (void) {


	long long resultado;
	int num;

	printf("Digite o numero para calcular fatorial \n");
	scanf("%d", &num);

	fatorial (num, &resultado);

	printf("Fatorial de %d é %lld\n", num, resultado);

	return 0;
}