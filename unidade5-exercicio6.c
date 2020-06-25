/* Já pensou em facilitar a vida do seu professor, criando um programa que 
    automatize os cálculos das notas de seus alunos? Sendo assim, faça um
    programa que efetue a leitura dos nome de cinco alunos e também quatro
    notas bimenstrais. Calcule a média de cada aluno e apresente os nomes
    classificados em ordem crescente de média.
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 5


typedef struct {
    char nome[50];
    float nota[4];
    float media;
}Aluno;

int main(){

    Aluno alunos[TAM];
    float soma;

       for (int i = 0; i < TAM; i++){
           soma = 0.0;
           printf ("Digite o nome do aluno - %d: ", i+1);
           fgets (alunos[i].nome, 50, stdin);
           fflush (stdin);

           for (int j = 0; j < 4; j++){
               printf ("Digite a nota do %d bimestre: ", j+1);
               scanf  ("%f", &alunos[i].nota[j]);
               fflush (stdin);

               soma += alunos[i].nota[j];
           }
            alunos[i].media = soma / 4.0;
       }

        // ordenar o vetor de alunos
        for (int i = 0; i < TAM - 1; i++){
            for (int j = 0; j < TAM - 1 - i; j++){
                if (alunos[j].media > alunos[j+1].media){
                    Aluno troca;
                    troca = alunos[j+1];
                    alunos[j+1] = alunos[j];
                    alunos[j] = troca;
                }
            }
        }

        //imprimir alunos ordenados em ordem crescente por media.
        printf ("Classificados em ordem crescente\n");
        printf ("Posicao - Nome - Media\n");
        for (int i = 0; i < TAM; i++){
            printf ("%d - %s -  %.2f\n", TAM - i, alunos[i].nome, alunos[i].media);
        }

    return 0;
}