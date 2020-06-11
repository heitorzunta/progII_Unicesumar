/* Faça um programa que leia um conjunto de pedidos e calcule
    o total da compra. O pedido possui os seguintes campos:
    número, data(dia, mes, ano), preço unitário e quantidade.
    A entrada de pedidos é encerrada quando o usuário informa
    zero com número de pedido. */

#include <stdio.h>
#include <stdlib.h>

int main() {

    system ("clear");

    int numPedido, dia, mes, ano, qtdProduto;
    float precoUnitario, totalCompra = 0;

    printf ("Digite o número do pedido: ");
    scanf  ("%d", &numPedido);

    while (numPedido != 0){
        printf ("Digite a data no formado dd/MM/yyyy: ");
        scanf  ("%d/%d/%d", &dia, &mes, &ano);
        printf ("Digite o preço unitário em R$: ");
        scanf  ("%f", &precoUnitario);
        printf ("Digite a quantidade: ");
        scanf  ("%d", &qtdProduto);

        totalCompra += (precoUnitario * qtdProduto);

         printf ("Digite o número do pedido: ");
        scanf  ("%d", &numPedido);        
    }

    printf ("O total da compra foi: %.2f\n", totalCompra);

    return 0;
}