#ifndef HEADERS_H_INCLUDED
#define HEADERS_H_INCLUDED

typedef struct cadastro_produtos {
    char nome;
    int id;
    int estoque;
    float preco;
    int qtdVendida;
} Produtos;

// Funções de produtos

void menuDeProdutos(struct cadastro_produtos *ptrProdutos,
                    int *tamanhoVetorProdts,
                    int *contadorProdutos);

void exibirDeProdutos(struct cadastro_produtos *ptrProdutos,
                      int **tamanhoVetorProdts,
                      int **contadorProdutos);

void cadastrarProdutos(struct cadastro_produtos *ptrProdutos,
                       int **tamanhoVetorProdts,
                       int **contadorProdutos);

// Funções de venda

void menuDeVendas(struct cadastro_produtos *ptrProdutos,
                  int *tamanhoVetorProdts,
                  int *contadorProdutos);

#endif // HEADERS_H_INCLUDED
