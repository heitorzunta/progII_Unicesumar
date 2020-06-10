/* A prefeitura de uma cidade está coletando informações sore o salário
    e o número de filhos dos habitantes. A leitura de dados é realizada
    até que seja informado o valor -1 para o salário. Apresente a média
    de salário da população, a média de filhos e o maior salário. */

#include <stdio.h>
#include <stdlib.h>


int main() {

    system("clear");

    float salario, mediaSalario, mediaFilho, maiorSalario = 0.0, somaSalario = 0;
    int qtdHabitante = 0, somaFilho = 0, qtdFilho;

    printf ("Digite o salário do habitante %d: ", qtdHabitante+1);
    scanf  ("%f", &salario);
    fflush (stdin);

    while (salario != -1)
    {
        printf ("Digite a quatidadede de filhos: ");
        scanf ("%d", &qtdFilho);

        qtdHabitante++;
        somaSalario +=salario;
        somaFilho += qtdFilho;

        if (salario > maiorSalario){
            maiorSalario = salario;
        }
        
        fflush (stdin);
        printf ("Digite o salário do habitante %d: ", qtdHabitante+1);
        scanf  ("%f", &salario);
    }
    
    mediaSalario = somaSalario /  qtdHabitante;
    mediaFilho = (float) somaFilho / qtdHabitante;

    printf ("A media de salário é: %.2f\n", mediaSalario);
    printf ("A média de filhos é: %.2f\n", mediaFilho);
    printf ("O maior salário é: %.2f\n", maiorSalario);

    return 0;
}