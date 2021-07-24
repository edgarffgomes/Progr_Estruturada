/* Considere um vetor com 50 números inteiros lidos pelo teclado. Faça um algoritmo que imprima o segundo
maior número presente no vetor. Crie e utilize duas funções: uma para preencher o vetor e outro para imprimir
o segundo maior número.
Obs. 1: Não é permitido utilizar qualquer estrutura de dados auxiliar.
Obs. 2: Não é permitido ordenar o vetor. */
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
		printf("Digite um valor para a posição %d: ", i+1);
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
	printf("O  segundo maior elemento do vetor é: %d\n", segmaior);
}
