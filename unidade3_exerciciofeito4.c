/* Programa que apresenta todos os números divisíveis por tries que 
    sejam menores que 100. */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero;

    printf ("{");
    for (int i = 100; i > 0; i--){


        if(i > 3 && i % 3 == 0){
            printf ("%d, ", i);
        }
    
        if (i == 3) {
            printf ("3}\n");
        }
        
    }

    return 0;
}