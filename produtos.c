#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers.h"
#include <locale.h>

void menuDeProdutos(struct cadastro_produtos *ptrProdutos,
                    int *tamanhoVetorProdts,
                    int *contadorProdutos) {

    int flag = 1, codigo;
    int i = 0;
    char voltar = 'q';
    *tamanhoVetorProdts = 10;

    while(flag == 1) {
            while(codigo != 7) {
                system("cls");

                printf("\n\n=====\t\t||\t\t MENU DE PRODUTOS \t\t||\t\t=====\n\n");

                printf("\n \t Código  \t Opção              \t\n");
                printf("\n \t 1       \t Exibir             \t");
                printf("\n \t 2       \t Cadastrar          \t");
                printf("\n \t 3       \t Atualizar          \t");
                printf("\n \t 4       \t Excluir            \t");
                printf("\n \t 5       \t Salvar             \t");
                printf("\n \t 6       \t Ler                \t");
                printf("\n \t 7       \t Voltar             \t\n");

                printf("\nDigite o código para selecionar a opção: ");
                scanf("%d", &codigo);
                getchar();

                ptrProdutos = calloc(10,sizeof(Produtos));

                ptrProdutos[0].id = 10;
                ptrProdutos[0].estoque = 100;
                ptrProdutos[0].nome = 'c';
                ptrProdutos[0].preco = 100;

                switch(codigo)
                {
                case 1:
                    flag = 0;
                    system("cls");
                    printf("%i", *tamanhoVetorProdts);
                    exibirProdutos(ptrProdutos);

                    break;

                case 2:
                    flag = 0;
                    cadastrarProdutos()

                    break;

                case 3:
                    flag = 0;

                    break;

                case 4:
                    flag = 0;

                    break;

                case 5:
                    flag = 0;

                    break;

                case 6:
                    flag = 0;

                    break;

                case 7:
                    flag = 0;

                    printf("\nVocê será redirecinado ao menu principal. Aperte qualquer tecla para continuar.");
                    scanf("%c", &voltar);

                    system("cls");

                    break;

                default:
                    flag = 1;
                    printf("\n\aCódigo inválido! Digite qualquer tecla para retornar ao menu.");
                    scanf("%c", &voltar);

                    system("cls");

                    break;
                }
        }
    }
}

void exibirProdutos(struct cadastro_produtos *ptrProdutos) {

    char voltar;

    printf("\n\n=====\t\t||\t\t PRODUTOS \t\t||\t\t=====\n\n");
    printf("\n\t Código \t Produto \t Preço     \t Quantidade \t\n");

    for(int i = 0; i<10;i++) {

    printf("\n\t %d     \t %c      \t R$ %.2f   \t %d         \t",
            ptrProdutos[i].id,
            ptrProdutos[i].nome,
            ptrProdutos[i].preco,
            ptrProdutos[i].estoque);
    }

    printf("\n\nVocê será redirecinado ao menu principal. Aperte qualquer tecla para continuar.");
    scanf("%c", &voltar);

}

void cadastrarProdutos(struct cadastro_produtos *ptrProdutos,
                       int *tamanhoVetorProdts,
                       int *contadorProdutos) {

    int addProdutos = 0;

    printf("\nDigite a quantidade de produtos que você quer cadastrar: ");
    scanf("%i", addProdutos);
    getchar();

    printf("%i", addProdutos);

}
