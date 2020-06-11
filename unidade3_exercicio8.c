/* Elabore um programa que receba a idade, o peso, o sexo e o estado civil
    de várias pessoas e imprima a quantidade daquelas que são casadas,
    solteiras, separadas e viúvas. Apresente a média de idade e de peso.
    O algoritmo finaliza quando for informado o valor zero para idade. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    system ("clear");

    int nCasado, nSolteiro, nSeparado, nViuvo, idade, totalCadastro;
    float peso, somaPeso = 0, somaIdade = 0;
    char sexo, estadoCivil[10];

    printf ("Qual a idade: ");
    scanf ("%d", &idade);

    while (idade != 0 ){
        printf ("Qual o peso: ");
        scanf  ("%f", &peso);
        fflush (stdin);
        printf ("Qual o sexo (M/F): ");
        scanf  ("%c", &sexo);
        printf ("Estado civil (solteiro/casado/viuvo/separado: " );
        scanf  ("%s", estadoCivil);


        if (strcmp (estadoCivil, "solteiro") == 0){
            nSolteiro++;
        }
        else if (strcmp (estadoCivil, "casado") == 0) {
            nCasado++;
        }
        else if (strcmp (estadoCivil, "viuvo") == 0){
            nViuvo++;
        }
        else if (strcmp (estadoCivil, "separado") == 0){
            nSeparado++;
        }
        else {
            printf ("Estado civil (solteiro/casado/viuvo/separado: " );
            scanf  ("%s", estadoCivil);
        }

        somaIdade += idade;
        somaPeso += peso;
        totalCadastro++;

        printf ("Qual a idade: ");
        scanf ("%d", &idade);
    }

    system ("clear");

    printf ("QUANTIDADE DE ESTADOS CIVIS\n");
    printf ("ESTADO CIVIL   --   QUANTIDADE\n");
    printf ("SOLTEIRO\t\t%d\n", nSolteiro);
    printf ("CASADO\t\t%d\n", nCasado);
    printf ("SEPARADO\t\t\t%d\n", nSeparado);
    printf ("VIUVO\t\t\t%d\n", nViuvo);
    printf ("\n\n");
    printf ("Media das idades: %.2f\n", somaIdade / (float)totalCadastro);
    printf ("Media dos pesos: %.2f\n", somaPeso / (float)totalCadastro);

    return 0;
}