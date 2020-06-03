// C
/* Escreve um programa que receba cinco números inteiros e apresente o maior
    e o meno */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int maior, menor, num;

    for (int i=0; i < 5; i++){

        printf("Digite o numero %d de 5: ", i+1);
        scanf("%d", &num);

        // caso 1 preenchendo todas as variáveis
        if (i==0){
            maior = menor = num;
        }

        //condição para o maior numero
        if (num > maior) {
            maior = num;
        }
        //condicao para o menor número
        if (num < menor){
            menor = num;
        }
    }

    printf("O menor número é: %d\n O maior número é: %d\n", menor, maior);

    return 0;
}