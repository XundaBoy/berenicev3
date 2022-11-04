#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char sair = 'q', voltar = 'q';
    int flag = 1, codigo = 0;
    Produtos produtos;
    Produtos *ptrProdutos = &produtos;



    printf("\n\n=====\t\t||\t\t BEM-VINDO A PADARIA DA BERENICE \t\t||\t\t=====\n\n");

    while(flag == 1) {
        while(codigo != 3) {
            printf("\n\n=====\t\t||\t\t MENU \t\t||\t\t=====\n\n");

            printf("\n \t Código  \t Opção              \t\n");
            printf("\n \t 1       \t Produtos           \t");
            printf("\n \t 2       \t Vendas             \t");
            printf("\n \t 3       \t Sair               \t\n");

            printf("\nDigite o código para selecionar a opção: ");
            scanf("%d", &codigo);
            getchar();

            switch(codigo)
            {
            case 1:
                flag = 0;
                menuDeProdutos(ptrProdutos);

                break;

            case 2:
                flag = 0;
                menuDeVendas(ptrProdutos);

                break;

            case 3:
                flag = 0;
                printf("\nAgradecemos a preferência, volte sempre! :)\n");
                break;

            default:
                flag = 1;
                printf("\n\aCódigo inválido! Digite qualquer tecla para retornar ao menu");
                scanf("%c", &voltar);

                system("cls");

                break;
            }
        }
    }

    return 0;

}
