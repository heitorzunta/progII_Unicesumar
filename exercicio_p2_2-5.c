/* Faça um programa que recebe o código do estado de origem  da carga de um
    caminhão, o peso da carga em toneladas e o código dela. */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int cod_estado_origem, cod_carga = 0, preco_kilo;
    double peso_ton, cargo = 0.0, preco_carga, peso_kilos, valor_carga, valor_imposto;

    // CODIGO -- CARGO
    do {
        printf ("Digite o código do esta de origem da carga de um caminhão.\n");
        printf ("Código: ");
        scanf  ("%d", &cod_estado_origem);

        switch (cod_estado_origem){
            case 1:
                cargo = 0.2;
                break;
            
            case 2:
                cargo = 0.15;
                break;

            case 3:
                cargo = 0.1;
                break;

            case 4:
                cargo = 0.5;
                break;

            default:
                printf ("Código do estado de origem da carga inválido!\n");
                cargo = -1;  // verificador de codigo errado !
                break;
        }

    } while (cargo < 0);

    printf ("Digite o peso da carga em toneladas: \n");
    scanf  ("%lf", &peso_ton);

    do {
    printf ("Digite o código da carga, o valor é um inteiro de 10 à 40\n");
    printf ("Código da carga: ");
    scanf  ("%d", &cod_carga);
    }while (cod_carga < 10 || cod_carga > 40);

    //COD. CARGA -- PRECO / QUILO
    if ( cod_carga > 9 && cod_carga < 21){
        preco_kilo = 180;
    }else if (cod_carga > 20 && cod_carga < 31)
    {
        preco_kilo = 120;
    }else{
        preco_kilo = 230;
    }

    peso_kilos = peso_ton * 1000.0;
    preco_carga = peso_kilos* preco_kilo;
    valor_imposto = preco_carga * cargo;
    valor_carga = preco_carga + valor_imposto;

    printf ("O peso da carga em quilos é: %.2f toneladas\n", peso_kilos);
    printf ("O preço da carga é: %.2f\n", preco_carga);
    printf ("O valor do imposto é: %.2f\n", valor_imposto);
    printf ("O valor total da carga é: %.2f\n", valor_carga);

    return 0;
}