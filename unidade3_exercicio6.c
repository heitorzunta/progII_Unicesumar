/* Elabore um prgrama que leia uma frase e o número de vezes
    que deseja imprimi-la. */

#include <stdio.h>
#include <string.h>

int main(){

    char frase[100]; //poderia ter usado o ponteiro *frase;
    int vez;

    printf("Digite a frase: \n");
    gets(frase); //comando gets e completo porém nãos seguro.
    //scanf ("%[ˆ\n]s", frase)
    fflush(stdin);
    printf("Digite a quantidade de vezes a ser repetida: ");
    scanf("%d", &vez);

    for(int i = vez; i > 0; i--){
        printf("%s\n", frase);
    }

    return 0;

}