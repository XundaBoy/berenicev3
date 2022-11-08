#ifndef HEADERS_H_INCLUDED
#define HEADERS_H_INCLUDED

typedef struct{
    char nome[25];
    long int id;
    int estoque;
    float preco;
    int qtdVendida;
}cadastro_produtos;

// Funções de produtos

void menuDeProdutos(cadastro_produtos *ptrProdutos,
                    int *tamanhoVetorProdts,
                    int *contadorProdutos);

void exibirDeProdutos(cadastro_produtos *ptrProdutos,
                      int **tamanhoVetorProdts,
                      int **contadorProdutos);

void cadastrarProdutos(cadastro_produtos *ptrProdutos,
                       int **tamanhoVetorProdts,
                       int **contadorProdutos);

void cadastrarProdutos(cadastro_produtos *ptrProdutos,
                       int **tamanhoVetorProdts,
                       int **contadorProdutos);

// Funções de venda

void menuDeVendas(cadastro_produtos *ptrProdutos,
                  int *tamanhoVetorProdts,
                  int *contadorProdutos);

#endif // HEADERS_H_INCLUDED
