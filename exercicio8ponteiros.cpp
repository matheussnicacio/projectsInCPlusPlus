/*
8. Faça uma função que leia um texto e converta este texto para
maiúscula. O texto deve ser passado para função por referência.
*/
#include <stdio.h>
#include <stdlib.h>

void converta(char *t);

int main(void){
    char texto[50];

    printf("Digite um texto: ");
    gets(texto);

    converta(texto);

    printf("%s\n",texto);

    return 0;
}

void converta(char *t){
    for(int i=0;t[i]!='\0';i++){
        if(t[i]>='a' && t[i]<='z'){
            t[i]-='a'-'A';
        }
    }
}