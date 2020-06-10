/* programa que calcula o fatoria de um número */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


// valida se um numero é maior ou igual a 0
bool valida(int numero){

    if (numero >= 0) {
        return true;
    }
    else
    {
        return false;
    }
    
}

// calcula o fatorial de um número
int fatorial(int numero){

    int fator = 1;

    if (numero <= 1){
        return fator;
    }

    else {
        for (int i = numero; i > 0; i--){
            fator *= i;
        }
        return fator;
    }
}


int main(){

    system("clear");
    
    int numero;

    printf ("Digite o fatorial a ser calculado: ");
    scanf  ("%d", &numero);

    while (!valida(numero)){
        printf ("Digite o fatorial a ser calculado: ");
        scanf  ("%d", &numero);
    }

    printf("O fatorial é: %d\n", fatorial(numero));


    return 0;
}