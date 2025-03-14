#include <stdio.h>
#include <stdlib.h>

void soma(int *n1, int *n2);

int main (void) {

	int numero1, numero2;

	numero1 = 3;
	numero2 = 5;

	soma (&numero1,&numero2);

	printf("soma: %i",numero1);

	return 0;
}

void soma(int *n1, int *n2) {
	*n1+=*n2;
}