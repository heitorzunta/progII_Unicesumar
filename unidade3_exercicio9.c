/* Construa um programa que possibilite calcular a área total de uma
    residência(sala, cozinha, banheiro, quartos). O programa deve
    solicitar a entrada do nome, a largura e o comprimento de
    determinado cômodo até que o nome do cômodo seja "FIM". O
    programa deve apresentar o valor total acumulado da área residencial
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    system ("clear");

    char *comodo;
    float largura, comprimento, totalArea = 0.0;

    printf ("Nome do comodo (FIM para sair): ");
    scanf  ("%[^\n]s", comodo);
    
    comodo = strdup(comodo); //retorna o maiusculo da string

    while (strcmp(comodo, "FIM") != 0){
        printf ("Digite a largura/comprimento do comodo: ");
        scanf  ("%f/%f", &largura, &comprimento);

        totalArea += (float)(largura * comprimento); //Area = larg X compr

        fflush (stdin);
        printf ("Nome do comodo (FIM para sair): ");
        scanf  ("%[^\n]s", comodo);
        comodo = strdup(comodo); //retorna o maiusculo da string
    }

    printf ("A área total é: %.2f\n", totalArea);

    return 0;
}