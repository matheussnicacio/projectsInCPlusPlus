#include <stdio.h>

// 6. Faça uma função que receba como parâmetros por referência a linha,
// a coluna e uma mensagem, esta função deve imprimir na tela a mensagem na posição solicitada.


void imprimirNaPosicao(int *linha, int *coluna, char *mensagem[50]) {
    printf("LINHA : %d; COLUNA : %d; MENSAGEM : %s \n", *linha, *coluna, mensagem);
}


int main(void) {
    int linha, coluna;
    char mensagem[50];

    printf("Digite a linha :  ");
    scanf("%d", &linha);
    fflush(stdin);

    printf("Digite a coluna : ");
    scanf("%d", &coluna);
    fflush(stdin);

    printf("Digite a mensagem : ");
    scanf("%s", mensagem);


    imprimirNaPosicao(&linha, &coluna, mensagem);



    return 0;
}
