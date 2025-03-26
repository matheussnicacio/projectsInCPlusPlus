/*
5. Faça um programa para colocar três números em ordem crescente. 
Deve ter uma função para fazer a troca dos valores, use uma função 
usando passagem de parâmetro por referência.
*/
#include <stdio.h>
#include <stdlib.h>

void ordena(int *n);
void troca(int *n1, int *n2);

int main(void){
	int numeros[3];
	
	for(int i=0;i<3;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%i",&numeros[i]);
	}
	
	ordena(numeros);
	
	for(int i=0;i<3;i++){
		printf("%i, ",numeros[i]);
	}
	
	return 0;
}

void ordena(int *n){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(n[i]<n[j]){
				troca(&n[i],&n[j]);
			}
		}
	}
}

void troca(int *n1, int *n2){
	int aux = *n1;
	*n1=*n2;
	*n2=aux;
}


