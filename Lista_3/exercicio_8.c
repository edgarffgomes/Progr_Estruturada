/* Considere um vetor com 50 n�meros inteiros lidos pelo teclado. Fa�a um algoritmo que imprima o segundo
maior n�mero presente no vetor. Crie e utilize duas fun��es: uma para preencher o vetor e outro para imprimir
o segundo maior n�mero.
Obs. 1: N�o � permitido utilizar qualquer estrutura de dados auxiliar.
Obs. 2: N�o � permitido ordenar o vetor. */
#include<stdio.h>
#include <locale.h>
#define tam 50
void preencheVetor(int vetor[]);
void imprimeInfo (int vetor[]);

int main (){
	setlocale(LC_ALL, "Portuguese");
	int vetor[tam];
	preencheVetor(vetor);
	imprimeInfo(vetor);
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

void imprimeInfo(int vetor[]){
	int i, segmaior = -999999, maior=-999999;
	for(i=0;i<tam;i++){
		if(vetor[i]>=maior)
			maior = vetor[i];
	}
		
		for(i=0;i<tam;i++){
		if(vetor[i]>=segmaior && vetor[i]<maior)
			segmaior = vetor[i];
	}
	printf("O  segundo maior elemento do vetor �: %d\n", segmaior);
}
