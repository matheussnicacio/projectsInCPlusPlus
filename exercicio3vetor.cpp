/*3. Construa um algoritmo que leia um vetor de 10 números reais e mostre-os na ordem inversa.*/

#include <stdlib.h>
#include <stdio.h>
#define TAMANHO 10

int main (void){
	
		float num[TAMANHO];
		
	for (int i=0; i<TAMANHO; i++) {
		printf("Digite um numero : ",i+1);
		scanf("%f",&num[i]);
		fflush(stdin);
	}
	

	printf("NUMEROS \n");
    for (int i = TAMANHO - 1; i >= 0; i--) {
		printf("%i numeros  = %2.f \n",i+1,num[i]);	
	}
    		
	return 0;
}