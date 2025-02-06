// Como somar duas matrizes 3x3?
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int a[3][3], b[3][3], c[3][3];
	
	// entrada
	printf("Digite os dados da matriz A: \n\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Digite a[%i][%i] = ",i,j);
			scanf("%i",&a[i][j]);
			fflush(stdin);
		}
	}
	printf("\nDigite os dados da matriz B: \n\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Digite b[%i][%i] = ",i,j);
			scanf("%i",&b[i][j]);
			fflush(stdin);
		}
	}
	
	// processamento
	for(int linha=0;linha<3;linha++){
		for(int coluna=0;coluna<3;coluna++){
			c[linha][coluna] = a[linha][coluna] + b[linha][coluna];
		}
	}
	
	// saída
	printf("\nDados da matriz C: \n\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%i\t",c[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}