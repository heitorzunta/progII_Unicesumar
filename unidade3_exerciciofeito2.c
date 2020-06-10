/* O problema consiste em auxiliar um professor no fechamento das notas
    de uma turma. Para tanto, deve ser construído um programa que leia
    o código do aluno, número de notas e disciplina e as notas. Calcule
    a média final de cada aluno e informe o númeo de alunos aprovados
    e reprovados. Para ser aprovado, o estudante precisa obter média
    maior ou igual a seis. O programa é encerrado quando é informado
    o código de aluno zero. */

    #include <stdio.h>
    #include <stdlib.h>

    int main(){
        system("clear");

        int cod, nAprovado = 0, nReprovado = 0, qtsNotas;
        float nota, media = 0.0, soma = 0.0;

        printf ("Digite a quantidade de notas da matéria: ");
        scanf  ("%d", &qtsNotas);

        printf ("Digite o codigo do aluno: ");
        scanf  ("%d", &cod);

        while(cod != 0) {

            for (int i = 0; i < qtsNotas; i++){
                printf("Digite a nota numero %d: ", i+1);
                scanf ("%f", &nota);
                soma +=nota;
            }

            media = soma / qtsNotas;

            if (media >= 6){
                nAprovado++;
            }
            else {
                nReprovado++;
            }
            printf ("Digite o codigo do aluno: ");
            scanf  ("%d", &cod);

        }

        printf ("O numero de aprovados é: %d\n", nAprovado);
        printf ("O numero de reprovados é: %d\n", nReprovado);

        getchar();
        return 0;
    }