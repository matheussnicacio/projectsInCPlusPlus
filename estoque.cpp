#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100
#define TAMANHO_NOME 50

// Variáveis globais
char nomes[MAX_PRODUTOS][TAMANHO_NOME];
int quantidades[MAX_PRODUTOS];
int tamanho = 0;

// Declaração das funções
void adicionarProduto();
void removerProduto();
void consultarProduto();
void exibirEstoque();

int main(void) {
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
                adicionarProduto();
                break;
            case 2:
                removerProduto();
                break;
            case 3:
                consultarProduto();
                break;
            case 4:
                exibirEstoque();
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

void adicionarProduto() {
    char nome[TAMANHO_NOME];
    int quantidade;

    printf("Digite o nome do produto: ");
    scanf(" %s", nome);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    for (int i = 0; i < tamanho; i++) {
        if (strcmp(nomes[i], nome) == 0) {
            quantidades[i] += quantidade;
            printf("Quantidade atualizada com sucesso!\n");
            return;
        }
    }

    strcpy(nomes[tamanho], nome);
    quantidades[tamanho] = quantidade;
    tamanho++;
    printf("Produto adicionado com sucesso!\n");
}

void removerProduto() {
    char nome[TAMANHO_NOME];
    int quantidade;

    printf("Digite o nome do produto: ");
    scanf(" %s", nome);
    printf("Digite a quantidade a ser removida: ");
    scanf("%d", &quantidade);

    for (int i = 0; i < tamanho; i++) {
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

void consultarProduto() {
    char nome[TAMANHO_NOME];

    printf("Digite o nome do produto: ");
    scanf(" %s", nome);

    for (int i = 0; i < tamanho; i++) {
        if (strcmp(nomes[i], nome) == 0) {
            printf("Produto: %s, Quantidade: %d\n", nomes[i], quantidades[i]);
            return;
        }
    }
    printf("Erro: Produto não encontrado no estoque.\n");
}

void exibirEstoque() {
    if (tamanho == 0) {
        printf("O estoque está vazio.\n");
        return;
    }

    printf("\nProdutos no Estoque:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Produto: %s, Quantidade: %d\n", nomes[i], quantidades[i]);
    }
}
