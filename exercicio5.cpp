#include <stdio.h>
#include <string.h>

#define TAMANHO 
#define MAX_LEN 100

int main(void) {
    char palavras[TAMANHO][MAX_LEN]; 

    // Leitura das palavras
    printf("Digite 15 palavras:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Palavra [%d]: ", i + 1);
        scanf("%99s", palavras[i]); 
    }

    // Exibição das palavras na ordem inversa
    printf("\nPALAVRAS EM ORDEM INVERSA:\n");
    for (int i = TAMANHO - 1; i >= 0; i--) {
        printf("%d: %s\n", i + 1, palavras[i]);
    }

    return 0;
}