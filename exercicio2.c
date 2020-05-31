/* Programa que recebe quatro notas e calcula a média aritmetica entre elas */

#include <stdio.h>
#include <stdlib.h>

int main(){
    double media, soma = 0, nota;

    for(int i=0; i<4; i++){
        printf("Digite a nota da prova %d: ", i+1);
        scanf("%lf", &nota);
        soma += nota;
    }

    media = soma / 4;

    printf("Sua média foi: %.1lf\n", media);

    return 0;
}