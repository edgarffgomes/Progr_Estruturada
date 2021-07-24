/* Considere um vetor com 100 números inteiros gerados aleatoriamente de 1 a 500. Faça um algoritmo para
imprimir na tela a quantidade de números perfeitos presentes neste vetor. Crie e utilize três funções: uma
para preencher o vetor, outra para imprimir a quantidade de números perfeitos e a terceira para retornar 1, se
um número for perfeito, ou retornar 0, caso contrário.
Obs.: Um número inteiro positivo é chamado de Perfeito se a soma dos seus divisores naturais distintos for
igual ao próprio número, sem considerar o número como o seu próprio divisor.
Ex.: O número 6 é chamado de P, pois a soma dos seus divisores (1, 2 e 3) é igual a ele mesmo (1+2+3=6). */

#include<stdio.h>
#include <locale.h>
#include<stdlib.h>
#include<time.h>
#define tam 100
void preencheVetor(int vetor[]);
void imprimeQtd (int vetor[]);
int retornaPerfeito(int numero);

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
		vetor[i] = rand () % 500 + 1;
		printf ("%d ", vetor[i]);
		printf("\n");
	}
}

void imprimeQtd(int vetor[]){
	int qtd=0, i;
	for(i=0; i<tam; i++){
		 if(retornaPerfeito(vetor[i]) == 1)
		 qtd++;
		}
	printf("Quantidade de números perfeitos: %d\n", qtd);
}
int retornaPerfeito(int numero){
	int i, soma=0;
		for(i=1;i<numero; i++){
			if(numero % i == 0){
				soma+=i;
			}
		}
		if(soma==numero)
			return 1;
		else
			return 0;
}
