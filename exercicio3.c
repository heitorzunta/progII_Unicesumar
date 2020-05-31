/* Programa que recebe o valor de um deposito e o valor da taxa de juros, calcula e apresenta
    o valor do rendimento e o valor total (valor do deposito +  valor do rendimento) */

#include <stdio.h>
#include <stdlib.h>

int main() {

    float deposito, taxa_juros, rendimento, valor_total;

    printf ("Entre com o valor do depósito: R$ ");
    scanf  ("%f", &deposito);
    printf ("Entre com o valor da taxa de juros: ");
    scanf  ("%f", &taxa_juros);

    rendimento = deposito * (taxa_juros / 100);
    valor_total = deposito + rendimento;

    printf("O rendimento do valor de R$ %.2f é: R$ %.2f\nTendo um valor total de R$ %.2f\n", deposito, rendimento, valor_total);
    return 0;
}