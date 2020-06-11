/* Construa um programa que apresente todos os números divisíveis por
    três e por sete que sejam menores que 30 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    for (int i = 30; i > 0; i--){

        if (i % 3 == 0 && i % 7 == 0){
            printf("%d\t", i);
        }
    }
    printf("\n");
    return 0;
}