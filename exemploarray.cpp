/* Como guardar 10 idades de pessoas? */

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 3

int main(void){
	//int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
	int n[TAMANHO], soma = 0;
	float media;
	
	/*
	n[0]=25;
	n[1]=21;
	n[2]=26;
	n[3]=26;
	n[4]=19;
	n[5]=50;
	n[6]=61;
	n[7]=81;
	n[8]=21;
	n[9]=19;
	*/
	// entrada de dados
	for(int i=0;i<TAMANHO;i++){
		printf("Digite a %i idade: ",i+1);
		scanf("%i",&n[i]);
		fflush(stdin);
	}
	
	// processamento
	for(int i=0;i<TAMANHO;i++) soma+=n[i];
	media=(float)soma/TAMANHO;
	
	// saída 
	printf("A media e %f\n",media);
	printf("As idades sao: \n");
	
	for(int i=0;i<=TAMANHO-1;i++){
		printf("%i idade = %i\n",i+1,n[i]);
	}
	
	return 0;
}
