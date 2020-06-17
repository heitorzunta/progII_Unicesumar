/* O problema consiste em alaborar o cadastro para 20 livros,
     convertendo as seguintes informações: código, título, autor,
     área, ano e editora. Desenvolver um menu com as seguintes
     opções:
     1. cadastar livros
     2. imprimir as informações dos livros
     3. Pesquisar livros por código
     4. Ordenar livros por ano
     5. Sair do programa
*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 1

typedef struct
{
   int codigo;
   char titulo[50];
   char autor[30];
   char area[30];
   int ano;
   char editora[30];
}Livro;

int infoMenu(){
        int opcao;
        printf ("1 - Cadastrar Livros\n");
        printf ("2 - Imprimir os livros cadastrados\n");
        printf ("3 - Pesquisar livros por código\n");
        printf ("4 - Ordenar livros por ano\n");
        printf ("5 - Sair do programa\n");
        printf ("\n\n");
        printf ("Digite a opção: ");
        scanf  ("%d", &opcao);
        fflush (stdin);

        return opcao;
}

void infoLivro(Livro l){
    system ("\n");
    printf ("-- Informações do Livro --\n");
    printf ("Codigo: %d\n", l.codigo);
    printf ("Titulo: %s", l.titulo);
    printf ("Autor: %s", l.autor);
    printf ("Area: %s", l.area);
    printf ("Ano: %d\n", l.ano);
    printf ("Editora: %s", l.editora);
    printf ("----------------------------\n");
}

Livro buscar (int busca, int *vetor, int tamanho){
    for(int i = 0; i < tamanho; i++){
    }
}

int main() {

    int opcao;
    Livro livros[TAMANHO];

    system("reset");

    opcao = infoMenu();
    
    while (opcao != 5) {
        switch (opcao){

            case 1:
                system ("clear");
                for (int i = 0; i< TAMANHO; i++){                    
                    printf ("Digite o código do livro: ");
                    scanf  ("%d", &livros[i].codigo);
                    fflush (stdin);
                    printf ("Digite o título do livro: ");
                    fgets  (livros[i].titulo, 50, stdin);
                    fflush (stdin);
                    printf ("Digite o autor do livro: ");
                    fgets (livros[i].autor, 30, stdin);
                    fflush (stdin);
                    printf ("Digite a área do livro: ");
                    fgets (livros[i].area, 30, stdin);
                    fflush (stdin);
                    printf ("Digite o ano: ");
                    scanf  ("%d", &livros[i].ano);
                    fflush (stdin);
                    printf ("Digite o nome da editora: ");
                    fgets (livros[i].editora, 30, stdin);
                    fflush (stdin);
                }

                break;
            case 2:
                system ("clear");
                for (int i = 0; i < TAMANHO; i++){
                    infoLivro(livros[i]);
                }
                getchar();
                break;
            case 3:
                break;
            case 4:
                break;
        }

        opcao = infoMenu();  

    }    

    return 0;
}
