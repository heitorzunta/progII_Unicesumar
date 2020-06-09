/*
	O código apresentado pelo aluno possui um erro lógico ao comparar as variáveis a e b, 
	pois a variável de nome a está associada ao valor de B e a variável de nome b está
	associado ao valor de A. Assim quando entramos no laço condicional "if (a > b)" se
	ele for verdadeiro o resultado do printf deveria ser ("B > A"), alterando também a
	saída do próximo laço condicional "else if (b > a) que terá como saída o
	printf("A > B\n").
	A solução acima já resolve o problema lógico no código do aluno. Porém uma solução
	mais polida e convencionada para entendimento do código por outro programador seria
	apenas reassociar o valor de A para a variável a e valor de B para
	a variável B.
	Lembrando que é convencionado que o nome das variáveis precisam fazer sentido para o que
	ela representa.
*/

//minha solução aplicada no código abaixo

#include <stdio.h>

int main(void){
	int a, b;
	printf("Digite o valor de A:");
	scanf("%d", &a); //subtituição da associação do valor A para a variável a.
	printf("Digite o valor de B:");
	scanf("%d", &b); //idem somente associando o valor B a variável b.
	if(a > b){
	printf("A > B\n");
	} else if(b > a){
	printf("B > A\n");
	} else {
	printf("A = B\n");
	}
}