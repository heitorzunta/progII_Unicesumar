/* E comum que um programa seja capaz de realizr a ordenação de elementos
    ou dados deforma a facilitar as operações futuras e a apresentação 
    deste conjunto de dados. Assim sendo, escreve um programa que leia
    vetor A e o apresente em ordem crescente.

    Obs: Foram implementados a funcao de troca, lenght e o bubbleSort
    ---------------------------------------------------------------------------
    Bubble Sort
    # Ordenação por bolha
    # E considerado o algoritmo de ordenação mais simple e pior;
    # A ideia é percorrer o vetor diversas vezes a cada passagem o maior
        elemento vai "flutuar" para o final da sequencia;
    # cabe 3 otimizações (quando ele já esta ordenado, a primeira ordenaçao
        envia o maior já para o final e devido isto o laço interno é menor)    
    # Complexidade Pior caso, caso médio: O(n2) e melhor caso otimizado: O(n)
    #Espaço: Pior caso: O(n) e auxiliar o(1)
    # Adaptativo
    # Online 
    ---------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// tamanho de um vetor inteiro generico
//int length (int *vetor){
//    return sizeof(vetor);
//}

//troca elementos de um vetor de posição
void troca (int *valor1, int *valor2){
    int troca;

    troca = *valor1;
    *valor1 = *valor2;
    *valor2 = troca; 
}

void bubbleSort (int *vetor, int tamanho){
    bool trocou = false;
    for (int i = 0; i < tamanho - 1; i++){
        for (int j = 0; j < (tamanho - 1) - i; j++){
            if (vetor[j] > vetor[j+1]){
                troca(&vetor[j], &vetor[j+1]);
                trocou = true;
            }
         if (!trocou){
             break;
         }
        }
    }
}

void selectionSort (){
    //montar
}

// impressão de um vetor generico
void print (int *vetor, int tamanho){

    printf ("{%d, ", vetor[0]);
    for (int i = 1; i < tamanho - 1; i++){
        printf ("%d, ", vetor[i]);
    }
    printf ("%d}\n", vetor[tamanho - 1]);
}


int main() {

    int tamanho;

    printf ("Informe o tamanho do vetor: ");
    scanf  ("%d", &tamanho);

    int array[tamanho];

    for (int i = 0; i < tamanho; i++){
        printf ("Valor vetor[%d]: ", i + 1);
        scanf  ("%d", &array[i]);
    }

    bubbleSort(array, tamanho);
    print(array, tamanho);

    return 0;
}
