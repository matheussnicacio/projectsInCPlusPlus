#include <stdlib.h>
#include <stdio.h>


#define PI 3.14159

// 2. Construa um programa para calcular a área e de um círculo, a área deve ser do tipo de ponteiro. 

void calculoArea (double raio, double *area){
	
	*area = PI *  (raio * raio);
	
}


int main (void){
	
	double raio, area;
	
	printf("Digite o raio do circulo \n");
	scanf("%lf", &raio);
	
	
	calculoArea  (raio, &area);
	
	printf("Area do circulo e %.2lf\n", area);
	

	return 0;
}