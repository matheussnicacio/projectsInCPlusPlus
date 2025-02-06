#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100
#define TAMANHO_NOME 50

void copiarString(void);
void adicionarProduto(char nomes[][TAMANHO_NOME], int quantidades[], int *tamanho);
void removerProduto(char nomes[][TAMANHO_NOME], int quantidades[], int tamanho);
void consultarProduto(char nomes[][TAMANHO_NOME], int quantidades[], int tamanho);
void exibirEstoque(char nomes[][TAMANHO_NOME], int quantidades[], int tamanho);

int main(void) {
	
    char nomes[MAX_PRODUTOS][TAMANHO_NOME];
    int quantidades[MAX_PRODUTOS];
    int tamanho = 0;
    int opcao;

    do {
    	
        printf("\nControle de Estoque\n");
        printf("1. Adicionar Produto\n");
        printf("2. Remover Produto\n");
        printf("3. Consultar Produto\n");
        printf("4. Exibir Estoque\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch (opcao) {
            case 1:
                adicionarProduto(nomes, quantidades, &tamanho);
                break;
            case 2:
                removerProduto(nomes, quantidades, tamanho);
                break;
            case 3:
                consultarProduto(nomes, quantidades, tamanho);
                break;
            case 4:
                exibirEstoque(nomes, quantidades, tamanho);
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}

void copiarString(char destino[], const char origem[]) {
    int i = 0;
    while (origem[i] != '\0') {
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '\0';
}

void adicionarProduto(char nomes[][TAMANHO_NOME], int quantidades[], int *tamanho) {
    char nome[TAMANHO_NOME];
    int quantidade, i;

    printf("Digite o nome do produto: ");
    scanf(" %s", nome);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    for (i = 0; i < *tamanho; i++) {
        if (strcmp(nomes[i], nome) == 0) {
            quantidades[i] += quantidade;
            printf("Quantidade atualizada com sucesso!\n");
            return;
        }
    }

    copiarString(nomes[*tamanho], nome); 
    quantidades[*tamanho] = quantidade;
    (*tamanho)++;
    printf("Produto adicionado com sucesso!\n");
}

void removerProduto(char nomes[][TAMANHO_NOME], int quantidades[], int tamanho) {
    char nome[TAMANHO_NOME];
    int quantidade, i;

    printf("Digite o nome do produto: ");
    scanf(" %s", nome);
    printf("Digite a quantidade a ser removida: ");
    scanf("%d", &quantidade);

    for (i = 0; i < tamanho; i++) {
        if (strcmp(nomes[i], nome) == 0) {
            if (quantidades[i] >= quantidade) {
                quantidades[i] -= quantidade;
                printf("Quantidade removida com sucesso!\n");
                return;
            } else {
                printf("Erro: Não há quantidade suficiente no estoque.\n");
                return;
            }
        }
    }
    printf("Erro: Produto não encontrado no estoque.\n");
}

void consultarProduto(char nomes[][TAMANHO_NOME], int quantidades[], int tamanho) {
    char nome[TAMANHO_NOME];
    int i;

    printf("Digite o nome do produto: ");
    scanf(" %s", nome);

    for (i = 0; i < tamanho; i++) {
        if (strcmp(nomes[i], nome) == 0) {
            printf("Produto: %s, Quantidade: %d\n", nomes[i], quantidades[i]);
            return;
        }
    }
    printf("Erro: Produto não encontrado no estoque.\n");
}

void exibirEstoque(char nomes[][TAMANHO_NOME], int quantidades[], int tamanho) {
    int i;

    if (tamanho == 0) {
        printf("O estoque está vazio.\n");
        return;
    }

    printf("\nProdutos no Estoque:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Produto: %s, Quantidade: %d\n", nomes[i], quantidades[i]);
    }
}
