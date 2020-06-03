/* Faça um programa que leia um número e informe se ele é divisivel por tres
    e por 7 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;

    printf ("Digite o número a ser verificado: ");
    scanf  ("%d", &num);

    if (num%3 == 0 && num%7 == 0 ){
        printf ("Este número é divisível por 3 e por 7\n");
    }
    else
    {
        printf ("Este número não é divisível por 3 e por 7\n");
    }
    
    return 0;
}