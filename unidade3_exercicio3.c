/* Imaone que você esteja ensinando a tabuada para uma criança e precias mostrar
    a ela todas as possíveis multiplicações entre os números que vão de um
    até dez. Elabora um programa que imprima a tabuada do 1 ao 10. */

#include <stdio.h>
#include <stdlib.h>

int main() {

    system("cls");

    for (int i = 1; i < 11; i++){
        printf("TABUADA DO %d\n", i);

        for (int j = 1; j < 11; j++){
            printf("%d X %d = %d\n", i, j, i*j);
        }
        printf ("\n");
    }
    return 0;
}