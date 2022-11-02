#include "headers.h"

int menuDeProdutos(int estoque) {
int flag = 1;
    while(flag == 1) {
            system("cls");
        int codigo, flag = 0;
        char voltar = '1';

            printf("\n\n=====\t\t||\t\t MENU DE PRODUTOS \t\t||\t\t=====\n\n");

            printf("\n \t Código  \t Opção              \t\n");
            printf("\n \t a       \t Exibir             \t");
            printf("\n \t b       \t Cadastrar          \t");
            printf("\n \t c       \t Atualizar          \t");
            printf("\n \t d       \t Excluir            \t");
            printf("\n \t e       \t Salvar             \t");
            printf("\n \t f       \t Ler                \t");
            printf("\n \t g       \t Voltar             \t\n");

            printf("\nDigite o código para selecionar a opção: ");
            scanf("%c", &codigo);
            getchar();

            switch(codigo)
        {
        case 'a':
            flag = 0;

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
