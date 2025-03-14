#include <stdio.h>
#include <stdlib.h>
void soma(int *n);

int main (int *n) {

	int numeros[6];

	for (int i = 0; i < 5; i++) {
		printf("Digite %i numero: ", i + 1);
		scanf("%i",&numeros[i]);
	}
	soma(numeros);
	printf("Soma %i\n", numeros[5]);

	return 0;
}

void soma(int *n) {
	n[5]=0;
	for (int i=0; i<5; i++) {
		n[5]+=n[i];
	}

}
