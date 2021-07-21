/* Fa�a um algoritmo para verificar se um n�mero real lido pelo teclado encontra-se ou n�o em um vetor com
30 n�meros reais (tamb�m lido pelo teclado). Crie e utilize duas fun��es: uma para preencher o vetor e outra
para verificar se o n�mero pertence ou n�o ao vetor. A impress�o desta informa��o (se o n�mero pertence ou
n�o ao vetor) deve ser na fun��o main. */
#include<stdio.h>
#include <locale.h>
#define tam 5
void preencheVetor(int vetor[]);
int verificaNumero (int vetor[]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	int vetor[tam];
	preencheVetor(vetor);
	if (verificaNumero(vetor) == 1)
	printf("O n�mero se encontra no vetor\n");
	else
	printf("O n�mero n�o se encontra no vetor\n");
	return 0;
}
void preencheVetor(int vetor[]){
	int i;
	for (i=0;i<tam;i++){
		printf("Digite um valor para a posi��o %d: ", i+1);
		scanf("%d", &vetor[i]);
		printf("\n");
	}
}

int verificaNumero (int vetor[]){
	int numero, i;
	printf("Digite o n�mero que deseja verificar\n");
	scanf("%d", &numero);
	for(i=0;i<tam; i++){
		if(vetor[i] == numero)
		return 1;
	}
	return 0;
}
