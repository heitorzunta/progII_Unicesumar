/* Fazer um código que leia um conjunto de números inteiros
    e contar a quantidade de números pares e ímpares. A leitura deve 
    ser realizada até que seja lido o valor zero. */
    
#include <stdio.h>
#include <stdlib.h>

int main(){
    int par = 0, impar = 0, numero;

    printf ("Digite um conjunto de números inteiros e digite 0");
    printf (" para parar\n");

    do {
        printf ("Digite um número, 0 para parar: ");
        scanf  ("%d", &numero);

        if (numero != 0){
            if (numero % 2 == 0){
                par++;
            }
            else {
                impar++;
            }
        }    

    }while(numero != 0);

    printf ("A quantidade de números pares é: %d\n", par);
    printf ("A quantidade de números impares é: %d\n", impar);

    return 0;
}