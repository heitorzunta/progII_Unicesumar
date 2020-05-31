/* Escreva um programa que leia um número inteiro positivo e apresente
     o quadrado e a raiz quadrada deste numero */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int num, quadrado;
    float raiz_quadrada;

    do
    {
        printf ("Digite um número inteiro e positivo: ");
        scanf  ("%d", &num);

    } while (num < 0);

    quadrado = pow(num, 2);
    raiz_quadrada = sqrt(num);

    printf ("O número é %d\n", num);
    printf ("A sua potência de expoente 2 é: %d\n", quadrado);
    printf ("A sua raiz quadrada é: %.3f\n", raiz_quadrada);

    return 0;
}