
/*2. Construa um algoritmo que leia um vetor de 5 números reais e mostre a soma, a multiplicação e os números.

R.:*/


#include <stdlib.h>
#include <stdio.h>
#define TAMANHO 5


int main (void) {
	float num[TAMANHO],soma = 0,multiplicacao=1;
	for (int i=0; i<TAMANHO; i++) {
		printf("Digite um numero : ",i+1);
		scanf("%f",&num[i]);
		fflush(stdin);
	}
	for (int i=0; i<TAMANHO; i++) soma+=num[i];
	printf("A soma dos numeros e de : %2.f\n", soma);
	
	for (int i=0; i<TAMANHO; i++) multiplicacao*=num[i];
    printf("A multiplicacao dos numeros e de : %2.f\n",multiplicacao);
    
    	printf("NUMEROS \n");
	for (int i=0; i<TAMANHO;i++){
		printf("%i numeros  = %2.f \n",i+1,num[i]);	
	}
    
	return 0;
}

