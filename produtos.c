#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers.h"
#include <locale.h>

void menuDeProdutos( cadastro_produtos **ptrProdutos,
                     int *tamanhoVetorProdts, int * contadorProdutos)
{

    int flag = 1, codigo;
    int i = 0;
    char voltar = 'q';

    while(flag == 1)
    {
        while(codigo != 7)
        {
            system("cls");

            printf("\n\n=====\t\t||\t\t MENU DE PRODUTOS \t\t||\t\t=====\n\n");
            printf("%i", *tamanhoVetorProdts);
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
                system("cls");

                if(*tamanhoVetorProdts > 0)
                {
                    exibirProdutos(*ptrProdutos,
                                   *tamanhoVetorProdts);
                }
                else
                {
                    printf("\n\aAVISO: Você não possui produtos cadastrados.\n");
                }

                printf("\n\nVocê será redirecinado ao menu de produtos. Aperte qualquer tecla para continuar.");
                scanf("%c", &voltar);

                break;

            case 2:
                flag = 0;
                system("cls");

                int addProdutos = 0;

                printf("\n\n=====\t\t||\t\t CADASTRO DE PRODUTOS \t\t||\t\t=====\n\n");
                printf("\nDigite a quantidade de produtos que você quer cadastrar: ");
                scanf("%i", &addProdutos);
                getchar();


                if(*tamanhoVetorProdts == 0)
                {
                    *tamanhoVetorProdts = addProdutos;
                    *ptrProdutos = (cadastro_produtos*) calloc(addProdutos,sizeof(cadastro_produtos));
                }
                else if((*contadorProdutos)+addProdutos > *tamanhoVetorProdts)
                {
                    int novoTamVetor = *contadorProdutos + addProdutos;

                    // Aloca a nova área de memória para os produtos
                    cadastro_produtos *aux = (cadastro_produtos*) realloc(*ptrProdutos, novoTamVetor*sizeof(cadastro_produtos));

                    if(aux == NULL) {
                        printf("Falha ao alocar mem!");
                        exit(1);
                    }

                    memset(aux+*tamanhoVetorProdts, 0, (novoTamVetor-(*tamanhoVetorProdts))*sizeof(cadastro_produtos));

                    // Atualiza os ponteiros para a nova área
                    *ptrProdutos = aux;

                    *tamanhoVetorProdts = novoTamVetor;
                }

                if(*ptrProdutos == NULL)
                {
                    printf("\aERRO");
                    exit(1);
                }

                for(i=0; i < addProdutos; i++) {
                    cadastrarProdutos(*ptrProdutos,
                                  *tamanhoVetorProdts);
                }
                *contadorProdutos += addProdutos;

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

void exibirProdutos(cadastro_produtos *ptrProdutos,
                    int **tamanhoVetorProdts)
{

    char voltar;

    printf("\n\n=====\t\t||\t\t PRODUTOS \t\t||\t\t=====\n\n");
    printf("\n\t Código \t Produto \t Preço     \t Quantidade \t\n");

    for(int i = 0; i<**tamanhoVetorProdts; i++)
    {

        printf("\n\t %d     \t %s      \t R$ %.2f   \t %d         \t",
               ptrProdutos[i].id,
               ptrProdutos[i].nome,
               ptrProdutos[i].preco,
               ptrProdutos[i].estoque);
    }
}

void cadastrarProdutos(cadastro_produtos *ptrProdutos,
                       int tamanhoVetorProdts)
{

    printf("%i", tamanhoVetorProdts);

    int i;

    for(i = 0; i < tamanhoVetorProdts; i++)
    {
        int estoque = -1;
        float preco = -1;
        long int id = -1;

        if(ptrProdutos[i].id == 0)
        {
            while (procuraProduto(ptrProdutos, tamanhoVetorProdts, id) != -1)
            {
                printf("Digite o codigo do produto: ");
                scanf("%li",&id);

                if(procuraProduto(ptrProdutos, tamanhoVetorProdts, id) != -1)
                {
                    printf("Codigo ja existente!\n");
                }
            }
            // Insere o id novo na estrutura
            ptrProdutos[i].id = id;

            printf("\nDigite o nome do produto de até 25 caracteres (%i)%li: ", i+1, ptrProdutos[i].id);
            gets(ptrProdutos[i].nome);

            while(estoque < 0)
            {
                printf("\nDigite o estoque do produto (%i)%li: ", i+1, ptrProdutos[i].id);
                scanf("%i", &estoque);
                getchar();

                if(estoque < 0)
                {
                    printf("Quantidade inválida, digite um número maior que 0: ");
                    scanf("%i", &estoque);
                    getchar();
                }
                ptrProdutos[i].estoque = estoque;
            }

            while(preco < 0)
            {
                printf("\nDigite o preço do produto (%i)%li: ", i+1,ptrProdutos[i].id);
                scanf("%f", &preco);
                getchar();

                if(preco < 0)
                {
                    printf("Quantidade inválida, digite um número maior que 0: ");
                    scanf("%f", &preco);
                    getchar();
                }
                ptrProdutos[i].preco = preco;
            }
        }
    }
}

/*
Codigo do excluir
            int i;
            ptrProdutos[i].id = 0;
            (*contagemProdutos)--;
            */
