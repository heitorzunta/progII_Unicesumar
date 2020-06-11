/* Faça um programa que leia números inteiros até que seja informado o valor 0.
  Apresente a média dos valores, e o menor valor e a quantidade de números
  pares e ímpares */

#include <stdio.h>
#include <stdlib.h>

int main(){

    system("clear");

    int num, maior, menor, nPar, nImpar, soma = 0, nElementos = 0;
    float media = 0.0;

    printf ("Digite o número: ");
    scanf  ("%d", &num);

    while (num != 0){

        nElementos++;
        soma+=num;

        if (num % 2 == 0){
            nPar++;
        }

        else {
            nImpar++;
        }

        if (nElementos == 1){
            maior = menor = num;
        }

        if (num >= maior){
            maior = num;
        }
        
        else {
            menor = num;
        }

        printf ("Digite o número: ");
        scanf  ("%d", &num);

    }

    if(nElementos != 0){
        media = soma / nElementos;
    }
    system("clear");
    
    printf ("A média é: %.2f\n", media);
    printf ("O menor é: %d\n", menor);
    printf ("O maior é: %d\n", maior);
    printf ("-----###-----\n");
    printf ("Quantidade de pares: %d\n", nPar);
    printf ("Quantidade de impares: %d\n", nImpar);

    fflush(stdin);
    getchar();
    system("clear");
    return 0;
}