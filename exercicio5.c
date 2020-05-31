/* programa que calcula a área de um trapézio */

#include <stdio.h>
#include <stdlib.h>

float area_trapezio(float base_maior, float base_menor, float altura){
    
    return ((base_menor + base_maior) * altura) / 2;
}


int main(){

    float base_maior, base_menor, altura, area;

    printf ("Cálculo da área de um trapézio\n");
    printf ("Digite a base maior: ");
    scanf  ("%f", &base_maior);
    printf ("Digite a base menor: ");
    scanf  ("%f", &base_menor);
    printf ("Digite a altura: ");
    scanf  ("%f", &altura);

    area = area_trapezio(base_maior, base_menor, altura);

    printf("A área do trapezio é: %.3f\n", area);
    return 0;
}