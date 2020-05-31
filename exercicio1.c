/* Programa que le um número inteiro e apresenta seu sucessor e antecessor */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;

    printf("Digite um valor: ");
    scanf ("%d", &numero);

    printf("O valor digitado foi %d\n", numero);
    printf("O antecessor: %d\n", numero-1);
    printf("O sucessor: %d\n", numero+1);
    return (0);   
}

