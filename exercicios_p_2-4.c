/* Elabore um programa que receba o salário de um fucionario e o código
    do cargo e aprensente o cargo, o valor do aumento e o novo salario.
    A tabela a seguir apresenta os cargos.

    Codigo -- Cargo -- % de aumento
        1  -- Servente -- 40%
        2  -- Pedreiro -- 35%
        3  -- Mestre de obras -- 20%
        4  -- Técnico de segurança -- 10 %
 */


#include <stdio.h>
#include <stdlib.h>

int main() {

    int codCargo;
    double salario, porcentagem;
    char *cargo;

    printf ("Digite na sequencia: salário e o código de cargo do funcinário\n");
    printf ("Exemplo: 1000.00 2\n");
    printf ("Entre com os dados solicitados: ");
    scanf  ("%lf %d", &salario, &codCargo);

    switch (codCargo){
        case 1:
            cargo = "Servente";
            porcentagem = 0.4;
            break;
        case 2:
            cargo = "Pedreiro";    
            porcentagem = 0.35;
            break;
        case 3:
            cargo = "Mestre de Obras";
            porcentagem = 0.2;
            break;
        case 4:
            cargo = "Técnico de segurança";
            porcentagem = 0.1;
            break;
        default:
            printf ("Cargo inválido\n");
            codCargo = 0;
            break;
    }

    if (codCargo == 0){
        printf ("Como o cargo não foi encontrado repita a operação\n");
    }

    else {    
        printf ("CARGO:\t%s\n", cargo);
        printf ("VALOR DO AUMENTO:\tR$ %.2f\n", salario*porcentagem);
        printf ("NOVO SALÁRIO:\tR$ %.2f\n", salario*=porcentagem);
    }

    return 0;

}