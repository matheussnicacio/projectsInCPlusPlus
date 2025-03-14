#include <stdlib.h>
#include <stdio.h>

// 5. Faça um programa para colocar três números em ordem crescente.
// Deve ter uma função para fazer a troca dos valores, use uma função usando passagem de parâmetro por referência.

void ordenar(int *n1, int *n2, int *n3) {

	int temp;

	if (*n1 > *n2) {

		temp = *n1;
		*n1 = *n2;
		*n2 = temp;

	}
	if (*n1 > *n3) {

		temp = *n1;
		*n1 = *n3;
		*n3 = temp;

	}

	if (*n2 > *n3) {
		temp = *n2;
		*n2 = *n3;
		*n3 = temp;

	}

}



int main (void) {

	int num1, num2, num3;

	printf("Digite primeiro numero \n");
	scanf("%d", &num1);

	printf("Digite segundo numero \n");
	scanf("%d", &num2);

	printf("Digite terceiro numero \n");
	scanf("%d", &num3);

	ordenar(&num1, &num2, &num3);
	
	printf("Numeros em ordem crescente: %d %d %d", num1, num2, num3);




	return 0;
}