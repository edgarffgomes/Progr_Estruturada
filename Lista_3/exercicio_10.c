/* Considere um vetor com 100 n�meros inteiros gerados aleatoriamente de 1 a 500. Fa�a um algoritmo para
imprimir na tela a quantidade de n�meros perfeitos presentes neste vetor. Crie e utilize tr�s fun��es: uma
para preencher o vetor, outra para imprimir a quantidade de n�meros perfeitos e a terceira para retornar 1, se
um n�mero for perfeito, ou retornar 0, caso contr�rio.
Obs.: Um n�mero inteiro positivo � chamado de Perfeito se a soma dos seus divisores naturais distintos for
igual ao pr�prio n�mero, sem considerar o n�mero como o seu pr�prio divisor.
Ex.: O n�mero 6 � chamado de P, pois a soma dos seus divisores (1, 2 e 3) � igual a ele mesmo (1+2+3=6). */

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
	printf("Quantidade de n�meros perfeitos: %d\n", qtd);
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
