#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char sair = 'q', voltar = 'q', codigo = 'q';
    int flag = 1;

    printf("\n\n=====\t\t||\t\t BEM-VINDO A PADARIA DA BERENICE \t\t||\t\t=====\n\n");

    while(flag == 1) {
        while(codigo != 'd') {
            printf("\n\n=====\t\t||\t\t MENU \t\t||\t\t=====\n\n");

            printf("\n \t Código  \t Opção              \t\n");
            printf("\n \t a       \t Cadastrar estoque  \t");
            printf("\n \t b       \t Visualizar estoque \t");
            printf("\n \t c       \t Realizar venda     \t");
            printf("\n \t d       \t Sair               \t\n");

            printf("\nDigite o código para selecionar a opção: ");
            scanf("%c", &codigo);
            getchar();

            switch(codigo)
            {
            case 'a':
                flag = 0;

                while(sair != '6')
                {
                    system("cls");
                //    fcadastrarEstoque();

                    printf("\nDeseja fazer um novo cadastro? Digite qualquer tecla para sim ou 6 para não: ");
                    scanf("%c", &sair);
                    getchar();
                }

                printf("\nVocê sera redirecionado ao menu. Digite qualquer tecla para continuar.");
                scanf("%c", &voltar);
                system("cls");

                break;

            case 'b':
                flag = 0;
                system("cls");

              //  fvisualizarEstoque(codigo);

                break;

            case 'c':
                flag = 0;
                system("cls");

                while(sair != '6')
                {
               //     fvisualizarEstoque(codigo);
               //     fcompra();

                    printf("\nDeseja fazer uma nova compra? Digite qualquer tecla para sim ou 6 para não: ");
                    scanf("%c", &sair);
                    getchar();
                }
                system("cls");
               // fformaDePagamento();

                break;

            case 'd':

                flag = 0;
                printf("pinto");
                /*
                printf("\n\n=====\t\t||\t\t RELATÓRIO DE VENDA \t\t||\t\t=====\n\n");

                printf("\n \t Código \t Produto        \t Subtotal    \t Quantidade \t \n");
                printf("\n \t 1      \t Pão de forma   \t R$ %.2f  \t %i         \t ", valorVendido[0], itensVendidos[0]);
                printf("\n \t 2      \t Pão de centeio \t R$ %.2f  \t %i         \t ", valorVendido[1], itensVendidos[1]);
                printf("\n \t 3      \t Broa de milho  \t R$ %.2f  \t %i         \t ", valorVendido[2], itensVendidos[2]);
                printf("\n \t 4      \t Sonho          \t R$ %.2f  \t %i         \t ", valorVendido[3], itensVendidos[3]);
                printf("\n \t 5      \t Tubaína        \t R$ %.2f  \t %i         \t \n", valorVendido[4], itensVendidos[4]);

                printf("\nAgradeçemos a preferência, volte sempre!\n");
                */
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
