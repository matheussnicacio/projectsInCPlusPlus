/*7. Construa um algoritmo que leia duas matrizes 5x5 e gere uma terceira matriz com a subtração dos elementos correspondentes de a e b.*/

#include <stdlib.h>
#include <stdio.h>
#define TAMANHO 5	 
int main(void){
	
		int a[TAMANHO][TAMANHO], b[TAMANHO][TAMANHO], c[TAMANHO][TAMANHO];
		
		
			// entrada
	printf("Digite os dados da matriz A: \n\n");
	for(int i=0;i<TAMANHO;i++){
		for(int j=0;j<TAMANHO;j++){
			printf("Digite a[%i][%i] = ",i,j);
			scanf("%i",&a[i][j]);
			fflush(stdin);
		}
	}
	printf("\nDigite os dados da matriz B: \n\n");
	for(int i=0;i<TAMANHO;i++){
		for(int j=0;j<TAMANHO;j++){
			printf("Digite b[%i][%i] = ",i,j);
			scanf("%i",&b[i][j]);
			fflush(stdin);
		}
	}
	
	// processamento
	for(int linha=0;linha<TAMANHO;linha++){
		for(int coluna=0;coluna<TAMANHO;coluna++){
			c[linha][coluna] = a[linha][coluna] - b[linha][coluna];
		}
	}
	
	
	
	
	// saída
	printf("\nDados da matriz C: \n\n");
	for(int i=0;i<TAMANHO;i++){
		for(int j=0;j<TAMANHO;j++){
			printf("%i\t",c[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}