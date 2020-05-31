/* Escreve um programa que, dado o raio de um circulo, calcule sua área e o perimetro. A área 
    é a superficie do objeto, dada por A = pir^2, e o perímetro é a medida do contorno do objeto dado
    por P = 2pir^2. Dica: utilize as funcoes intrisecas vistas nesta unidade. */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

    double raio, area, perimetro;

    do {
        printf ("Digite o raio do círculo: ");
        scanf  ("%lf", &raio);
    } while (raio < 0);
    
    area = M_PI * pow(raio, 2);
    perimetro = 2 * M_PI * pow(raio, 2);

    printf ("A circunferencia de raio: %.2lf possui uma área de: %.2lf e perímetro igual a: %.2lf\n", raio, area, perimetro);

    return 0;
}