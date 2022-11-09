#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "headers.h"

void menuDeVendas(cadastro_produtos *ptrProdutos,
                    int tamanhoVetorProdts) {

    int flag = 1, codigo;
    char voltar = 'q';

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

            switch(codigo)
            {
            case 1:
                flag = 0;

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
                printf("\n\aCódigo inválido! Digite qualquer tecla para retornar ao menu de vendas.");
                scanf("%c", &voltar);

                system("cls");

                break;
            }
        }
    }
}
