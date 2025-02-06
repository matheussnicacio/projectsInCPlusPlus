#include <stdlib.h>
#include <stdio.h>
#define TAM 2

int main (void){
	
	int option  ,a[TAM][TAM], b[TAM][TAM], c[TAM][TAM], exit=1;
	
	
	do {
	
	printf("Escolha uma das opcoes \n");
	printf(" 1 - Inserir dados da matriz A\n");
	printf(" 2 - Inserir dados da matriz B\n");
	printf(" 3 - Somar matriz A e B \n");
	printf(" 4 - Sair");
	
	scanf("%i",&option);
	
switch (option){
	case 1:
	printf("Digite os dados da matriz A: \n\n");
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
			printf("Digite a[%i][%i] = ",i,j);
			scanf("%i",&a[i][j]);
			fflush(stdin);
		}
	}
		break;
	
	
	case 2:
			printf("\nDigite os dados da matriz B: \n\n");
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
			printf("Digite b[%i][%i] = ",i,j);
			scanf("%i",&b[i][j]);
			fflush(stdin);
		}
	}
		break;
	case 3:
			printf("Digite os dados da matriz A: \n\n");
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
			printf("Digite a[%i][%i] = ",i,j);
			scanf("%i",&a[i][j]);
			fflush(stdin);
		}
	}
	printf("\nDigite os dados da matriz B: \n\n");
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
			printf("Digite b[%i][%i] = ",i,j);
			scanf("%i",&b[i][j]);
			fflush(stdin);
		}
	}
	
	// processamento
	for(int linha=0;linha<TAM;linha++){
		for(int coluna=0;coluna<TAM;coluna++){
			c[linha][coluna] = a[linha][coluna] + b[linha][coluna];
		}
	}
	
	// saída
	printf("\nDados da matriz C: \n\n");
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
			printf("%i\t",c[i][j]);
		}
		printf("\n");
	}
	
		
		
		
		
		
		break;
	case 4:
	
			printf(" Programa finalizado \n : ");
			
			exit = 1 ;
	
	
	
}



}while (exit !=1 );



	
	
	
	return 0;
}


