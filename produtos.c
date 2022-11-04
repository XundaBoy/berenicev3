#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers.h"
#include <locale.h>

void menuDeProdutos(struct cadastro_produtos *ptrProdutos) {

    int flag = 1, codigo;
    int i = 0;
    char voltar = 'q';
    //char string [] = "nome"

    while(flag == 1) {

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

        ptrProdutos = malloc(10*sizeof(Produtos));

        ptrProdutos[0].id = 10;
        ptrProdutos[0].estoque = 100;
    //  strcpy((*ptrProdutos).nome, string);
        ptrProdutos[0].preco = 100;

        switch(codigo)
        {
        case 1:
            flag = 0;

        printf("\n\n=====\t\t||\t\t PRODUTOS \t\t||\t\t=====\n\n");

        printf("\n\t Código \t Produto \t Preço \t Quantidade \t\n");
        for(int i = 0; i<10;i++) {
          printf("\n\t %d \t %s \t R$ %.2d \t %d \t", ptrProdutos[i].id, ptrProdutos[i].nome, ptrProdutos[i].preco, ptrProdutos[i].estoque);
        }

            break;

        case 2:
            flag = 0;

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
            printf("\nCódigo inválido! Digite qualquer tecla para retornar ao menu.");
            scanf("%c", &voltar);

            system("cls");

            break;
        }
    }
}
