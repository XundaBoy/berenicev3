#ifndef HEADERS_H_INCLUDED
#define HEADERS_H_INCLUDED

typedef struct cadastro_produtos {
    char nome[50];
    int id, estoque;
    float preco;
} Produtos;

void menuDeProdutos(struct cadastro_produtos *ptrProdutos);

void menuDeVendas(struct cadastro_produtos *ptrProdutos);

#endif // HEADERS_H_INCLUDED
