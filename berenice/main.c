#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char sair = 'q', voltar = 'q', codigo = 'q';
    int flag = 1;

    int estoque[] = {0, 0, 0, 0, 0};
    int *pEstoque = &estoque;
    int compras[] = {0, 0, 0, 0, 0};
    int itensVendidos[] = {0, 0, 0, 0, 0};
    float valorVendido[] = {0, 0, 0, 0, 0};
    float subtotal[] = {0, 0, 0, 0, 0 };
    float preco[] = {7.5, 8.69, 5, 4.5, 3.25};
    int coditem[] = {1,2,3,4,5};

    printf("\n\n=====\t\t||\t\t BEM-VINDO A PADARIA DA BERENICE \t\t||\t\t=====\n\n");

    while(flag == 1) {
        while(codigo != 'd') {
            printf("\n\n=====\t\t||\t\t MENU \t\t||\t\t=====\n\n");

            printf("\n \t Código  \t Opção              \t\n");
            printf("\n \t a       \t Produtos           \t");
            printf("\n \t b       \t Vendas             \t");
            printf("\n \t c       \t Sair               \t\n");

            printf("\nDigite o código para selecionar a opção: ");
            scanf("%c", &codigo);
            getchar();

            switch(codigo)
            {
            case 'a':
                flag = 0;
                menuDeProdutos(pEstoque);

                break;

            case 'b':
                flag = 0;

                break;

            case 'c':
                flag = 0;

                break;

            case 'd':

                flag = 0;

                break;

            default:
                flag = 1;
                printf("\nCódigo inválido! Digite qualquer tecla para retornar ao menu");
                scanf("%c", &voltar);

                system("cls");

                break;
            }
        }
    }

    return 0;

}
