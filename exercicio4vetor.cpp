
//4. Construa um algoritmo que leia um vetor de 10 caracteres, e diga quantas consoantes foram lidas. Imprima as consoantes.

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 2

int main(void) {
    char x[TAMANHO];
    int consoantes = 0;

    // Entrada
    printf("Digite 10 caracteres:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Digite o caractere [%d]: ", i + 1);
        scanf(" %c", &x[i]); 
    }

    // Verificação de consoantes
   printf("As consoantes digitadas sao:\n");
    for (int i = 0; i < TAMANHO; i++) {
        char c = x[i];

        // Verifica se é uma letra e não é uma vogal
        if ((c >= 'a' && c <= 'z' && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) ||
            (c >= 'A' && c <= 'Z' && !(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))) {
            printf("%c ", c);
            consoantes++;
        }
    }

    printf("\nTotal de consoantes: %d\n", consoantes);

    return 0;
}
