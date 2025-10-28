//=================================================================================
// Sistema de Biblioteca - Parte 1
//
//Objetivo: Implementar o cadastro e a listagem de livros usando um array estático.
//Foco em structs, entrada/saída de dados e organização básica.
//=================================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //para strcspn()

//Constantes Globais

#define max_livros 50
#define tam_string 100

//Definição da estrutura (struct)

struct livro {
    char nome[tam_string];
    char autor[tam_string];
    char editora[tam_string];
    int edicao;
};

//Função para limpar o buffer nde entrada

void limparbufferentrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

//Função Principal (main)

int main(){
    struct livro biblioteca[max_livros];
    int totallivros = 0;
    int opcao;

    //Laço principal do menu

    do{
        //Exibe o menu
        printf("==================================\n");
        printf("***** BIBLIOTECA - PARTE 1 *****\n");
        printf("==================================\n");
        printf("1 - Cadastrar novo livro\n");
        printf("2 - Listar todos os livros\n");
        printf("0 - Sair\n");
        printf("-----------------------------------\n");
        printf("Escolha uma Opção: ");

        //Leitura da opção escolhida
        scanf("%d", &opcao);
        limparbufferentrada(); //limpa o '\n' deixado pelo scanf

        //Processamento das opções

        switch (opcao)
        {
        case 1: //Cadastro de livros
            printf("***** Cadastro de Novo Livro *****\n\n");

            if (totallivros < max_livros) {
                printf("Digite o nome do livro: ");
                fgets(biblioteca[totallivros].nome, tam_string, stdin);

                printf("Digite o autor: ");
                fgets(biblioteca[totallivros].autor, tam_string, stdin);

                printf("Digite a editora: ");
                fgets(biblioteca[totallivros].editora, tam_string, stdin);

                biblioteca[totallivros].nome[strcspn(biblioteca[totallivros].nome, "\n")] = '\0';
                biblioteca[totallivros].autor[strcspn(biblioteca[totallivros].autor, "\n")] = '\0';
                biblioteca[totallivros].editora[strcspn(biblioteca[totallivros].editora, "\n")] = '\0';

                printf("Digite a edição: ");
                scanf("%d", &biblioteca[totallivros].edicao);
                limparbufferentrada();

                totallivros++;

                printf("\nLivro cadastrado com sucesso!\n");
            } else {
                printf("Biblioteca cheia! Não é possível cadastrar mais livros.\n");
            }
            break;

        case 2: //Listagem de livros
            printf("***** Lista de Livros Cadastrados *****\n\n");

            if (totallivros == 0) {
                printf("Nenhum livro cadastrado ainda.");
                } else {
                    for(int i = 0; i < totallivros; i++) {
                        printf("-----------------------\n");
                        printf("Livro %d\n", i + 1);
                        printf("Nome: %s\n", biblioteca[i].nome);
                        printf("Autor: %s\n", biblioteca[i].autor);
                        printf("Editora: %s\n", biblioteca[i].editora);
                        printf("Edição: %d\n", biblioteca[i].edicao);
                    }
                    printf("-----------------------------------\n");
                }

                //A pausa é crucial para que o usuário veja a lista antes
                //proximo loop limpar a tela
                printf("\nPressione Enter para continuar...");
                getchar();
            break;
        
        case 0: //Sair.
            printf("\nSaindo do sistema...\n");
            break;
        
        default:
            printf("\nOpção inválida! Tente novamente.\n");
            printf("\nPressione Enter para continuar...\n");
            getchar();
            break;
        }

    } while (opcao != 0);

    return 0; // Fim do programa
}