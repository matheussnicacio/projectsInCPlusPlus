#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100
#define TAMANHO_NOME 50

// Funções
void adicionarProduto(char nomes[][TAMANHO_NOME], int quantidades[], int *tamanho);
void removerProduto(char nomes[][TAMANHO_NOME], int quantidades[], int *tamanho);
void consultarProduto(char nomes[][TAMANHO_NOME], int quantidades[], int tamanho);
void listarEstoque(char nomes[][TAMANHO_NOME], int quantidades[], int tamanho);

int main(void) {
    char nomes[MAX_PRODUTOS][TAMANHO_NOME];
    int quantidades[MAX_PRODUTOS];
    int tamanho = 0; 
    char opcao;

    do {
        system("cls");
        printf("1 - Adicionar Produto\n");
        printf("2 - Listar Estoque\n");
        printf("3 - Consultar Produto\n");
        printf("4 - Remover Produto\n");
        printf("5 - Sair\n");
        printf("Digite uma opcao: ");
        scanf(" %c", &opcao);
        fflush(stdin);

        switch (opcao) {
            case '1':
                adicionarProduto(nomes, quantidades, &tamanho);
                break;
            case '2':
                listarEstoque(nomes, quantidades, tamanho);
                break;
            case '3':
                consultarProduto(nomes, quantidades, tamanho);
                break;
            case '4':
                removerProduto(nomes, quantidades, &tamanho);
                break;
            case '5':
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Erro! Opcao invalida.\n");
                system("pause");
        }
    } while (opcao != '5');

    return 0;
}

// Função para adicionar um produto ao estoque
void adicionarProduto(char nomes[][TAMANHO_NOME], int quantidades[], int *tamanho) {
    char nome[TAMANHO_NOME];
    int quantidade, i;

    system("cls");
    printf("Digite o nome do produto: ");
    scanf(" %s", nome);
    fflush(stdin);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    fflush(stdin);

    // Verificar se o produto já existe
    for (i = 0; i < *tamanho; i++) {
        if (strcmp(nomes[i], nome) == 0) {
            quantidades[i] += quantidade; // Atualiza a quantidade
            printf("Quantidade atualizada com sucesso!\n");
            system("pause");
            return;
        }
    }

    // Adiciona um novo produto
    strcpy(nomes[*tamanho], nome);
    quantidades[*tamanho] = quantidade;
    (*tamanho)++;
    printf("Produto adicionado com sucesso!\n");
    system("pause");
}

// Função para listar todos os produtos do estoque
void listarEstoque(char nomes[][TAMANHO_NOME], int quantidades[], int tamanho) {
    system("cls");
    if (tamanho == 0) {
        printf("O estoque está vazio.\n");
    } else {
        printf("Estoque:\n");
        printf("Nome\tQuantidade\n");
        for (int i = 0; i < tamanho; i++) {
            printf("%s\t%d\n", nomes[i], quantidades[i]);
        }
    }
    system("pause");
}

// Função para consultar um produto pelo nome
void consultarProduto(char nomes[][TAMANHO_NOME], int quantidades[], int tamanho) {
    char nome[TAMANHO_NOME];
    int i;

    system("cls");
    printf("Digite o nome do produto: ");
    scanf(" %s", nome);
    fflush(stdin);

    for (i = 0; i < tamanho; i++) {
        if (strcmp(nomes[i], nome) == 0) {
            printf("Produto encontrado: %s, Quantidade: %d\n", nomes[i], quantidades[i]);
            system("pause");
            return;
        }
    }

    printf("Erro: Produto não encontrado no estoque.\n");
    system("pause");
}

// Função para remover uma quantidade de um produto
void removerProduto(char nomes[][TAMANHO_NOME], int quantidades[], int *tamanho) {
    char nome[TAMANHO_NOME];
    int quantidade, i;

    system("cls");
    printf("Digite o nome do produto: ");
    scanf(" %s", nome);
    fflush(stdin);
    printf("Digite a quantidade a ser removida: ");
    scanf("%d", &quantidade);
    fflush(stdin);

    for (i = 0; i < *tamanho; i++) {
        if (strcmp(nomes[i], nome) == 0) {
            if (quantidades[i] >= quantidade) {
                quantidades[i] -= quantidade;
                printf("Quantidade removida com sucesso!\n");
                if (quantidades[i] == 0) {
                    // Remove o produto se a quantidade for zero
                    for (int j = i; j < (*tamanho) - 1; j++) {
                        strcpy(nomes[j], nomes[j + 1]);
                        quantidades[j] = quantidades[j + 1];
                    }
                    (*tamanho)--;
                }
                system("pause");
                return;
            } else {
                printf("Erro: Quantidade insuficiente no estoque.\n");
                system("pause");
                return;
            }
        }
    }

    printf("Erro: Produto não encontrado no estoque.\n");
    system("pause");
}
