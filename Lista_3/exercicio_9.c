/* Considere um vetor com 50 números inteiros gerados aleatoriamente de 1 a 200. Faça um algoritmo para
imprimir na tela a quantidade de números compostos presentes neste vetor. Crie e utilize três funções: uma
para preencher o vetor, outra para imprimir a quantidade de números compostos e a terceira para retornar 1,
se um número for composto, ou retornar 0, caso contrário.
Obs.: Um número natural é Composto quando ele tem mais do que dois divisores naturais distintos.
Exemplo: O número 6 é composto, pois tem como divisores os números 1, 2, 3 e 6. */
#include<stdio.h>
#include <locale.h>
#include<stdlib.h>
#include<time.h>
#define tam 50
void preencheVetor(int vetor[]);
void imprimeQtd (int vetor[]);
int retornaComposto(int numero);

int main (){
	setlocale(LC_ALL, "Portuguese");
	int vetor[tam], numero;
	preencheVetor(vetor);
	imprimeQtd(vetor);
	return 0;
}
void preencheVetor(int vetor[]){
	int i;
	srand(time(NULL));
	for (i=0;i<tam;i++){
		vetor[i] = rand () % 200 + 1;
		printf ("%d ", vetor[i]);
		printf("\n");
	}
}

void imprimeQtd(int vetor[]){
	int qtd=0, i;
	for(i=0; i<tam; i++){
		 if(retornaComposto(vetor[i]) == 1)
		 qtd++;
		}
	printf("Quantidade de números compostos: %d\n", qtd);
}
int retornaComposto(int numero){
	int i, ver=0;
		for(i=1;i<=numero; i++){
			if(numero % i == 0){
				ver++;
			}
		}
		if(ver>2)
			return 1;
		else
			return 0;
}
	
