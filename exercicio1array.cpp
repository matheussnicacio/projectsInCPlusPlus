#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

//1.construe algoritmo que leia um veto de 10 numeros inteiros e mosrtre a soma dos numeros

int main (void) {

	int n[TAMANHO], soma = 0;
	for (int i=0; i<TAMANHO;i++) {

		printf("Digite um numero : ",i+1);
		scanf("%i",&n[i]);
		fflush(stdin);
	}
	
	for (int i=0; i<TAMANHO;i++) soma+=n[i];
  
	printf("A soma dos numeros e de : %i\n", soma);
	
	printf("NUMEROS \n");
	for (int i=0; i<TAMANHO;i++){
		printf("%i numeros  = %i \n",i+1,n[i]);	
	}
	return 0;
}