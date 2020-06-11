/* Faça um programa que apresenta a soma de todos os números inteiros
    ímpares entre 200 e 500 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    system("clear");

    int soma = 0;

    for (int i = 200; i < 501; i++){
        if(i % 3 == 0){
            soma+=i;
        }
    }

    printf ("A soma é: %d\n", soma);

    return 0;
}