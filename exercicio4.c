/* Escreva um programa que receba dois números, calcule e apresente o
     resultado do primeiro número elevado ao segundo */

#include <stdio.h>
#include <stdlib.h>
#include <math.h> // biblioteca de matematica

int main(){

    float base, expoente;

    printf ("Digite a base e o expoente(nesta mesma sequência) de nossa potencia: ");
    scanf  ("%f %f", &base, &expoente);

    printf ("O valor da potência de base %.2f e expoente %.2f é: %.2f\n", base, expoente, pow(base, expoente));

    return 0;
}
