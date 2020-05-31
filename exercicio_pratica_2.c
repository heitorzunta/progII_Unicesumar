/* Escreve um programa que leia o nome de uma pessoa e imprima a seguinte mensagem na tela:
    "Bem-vindo(a) à disciplina de Algoritmo e Lógica de Programação II <nome>" */

#include <stdio.h>
#include <stdlib.h>

int main() {

    char nome[20];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Bem-vindo(a) à disciplina de Algoritmo e Lógica de Programação II %s\n", nome);
    return 0; 
}