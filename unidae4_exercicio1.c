/* A computação, frequentemente, é utilizada para server de ferramenta
    na identificação de diferenças ou semelhanças entre objetos. Dessa
    forma, faça um programa que leia dois vetores A e B e apresenta a 
    quantidade de posicoes que possuem elementos diferentes entre um
    vetor e outro. */

    #include <stdio.h>
    #include <stdlib.h>


    int equals (int *vetorA, int *vetorB, int tamanho){
        int count = 0; 

        for (int i=0; i < tamanho; i++){
            if (vetorA[i] != vetorB[i]){
                count++;
            }
        }

        return count;
    }

    int main () {
        
        int totalDiferenca, tam;

        printf ("Qual o tamanho dos vetores A e B?: ");
        scanf  ("%d", &tam);

        int vetorA[tam], vetorB[tam];

        for (int i = 0; i < tam; i++){
            printf ("Digite o valor do vetor A na posição %d: ", i+1);
            scanf  ("%d", &vetorA[i]);
        }
        
        for (int i = 0; i < tam; i++){
            printf ("Digite o valor do vetor B na posição %d: ", i+1);
            scanf  ("%d", &vetorB[i]);
        }

        totalDiferenca = equals(vetorA, vetorB, tam);

        printf ("Nos vetores A e B temos %d elementos difetentes em suas posicoes\n", totalDiferenca);
        return 0;
    }