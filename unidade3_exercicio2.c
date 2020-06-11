/* Construa um programa que leia o nuemro de termos da serie e
     imprima seu valor. */

#include <stdlib.h>
#include <stdio.h>

// ATENCAO AQUI SERA USADO O CONCEITO DE RECURSIVIDADE

float serieN (int n){


    if (n == 1){
        return 1;
    }

    else {
        return (float)1/n + serieN(n-1); //não esqueca que n é int precisa de casting
    }
}

int main() {

    int termo;
    float soma = 0;
    printf ("Digite a quantidade de termos da série: ");
    scanf ("%d", &termo);

    soma = serieN(termo);

    printf("O valor da série S = %f", soma);

    return 0;
}