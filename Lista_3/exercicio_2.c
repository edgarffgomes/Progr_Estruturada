/* Faça um algoritmo para ler (pelo teclado) um vetor com 15 elementos inteiros e depois inverter este mesmo
vetor, sem utilizar um vetor auxiliar. Crie e utilize três funções: uma para preencher o vetor, outra para
invertê-lo e a terceira para imprimi-lo após a inversão.
Obs.: O objetivo deste exercício não é imprimir o vetor em ordem inversa, mas sim colocar os elementos
dentro do vetor em ordem inversa.*/

#include<stdio.h>
#include <locale.h>
#define tam 15
void preencheVetor(int vetor[]);
void inverteVetor (int vetor[]);
void imprimeVetor (int vetor[]);

int main (){
	setlocale(LC_ALL, "Portuguese");
	int vetor[tam];
	preencheVetor(vetor);
	inverteVetor(vetor);
	imprimeVetor(vetor);
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
void inverteVetor(int vetor[]){
	int i, aux, j=tam-1;
	for(i=0;i<tam/2;i++){
		aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
		j--;
	}
}
	
	
void imprimeVetor(int vetor[]){
	int i;
	for (i=0;i<tam;i++){
		printf ("%d ", vetor[i]);
	}
}
