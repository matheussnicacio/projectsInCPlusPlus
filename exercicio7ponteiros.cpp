#include <stdio.h>
#include <ctype.h>

// 7. Faça uma função que leia um nome, converta o primeiro caractere deste nome para maiúscula.
// O nome deve ser passado para função por referência.

void converterLetra(char *nome) {

    nome[0] = toupper(nome[0]); 


    printf("Nome com a primeira letra maiuscula: %s\n", nome);

}

int main(void) {

char nome[20];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    converterLetra(&nome);

    return 0;
}