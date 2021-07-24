/* Considere um vetor com 50 n�meros inteiros gerados aleatoriamente de 1 a 200. Fa�a um algoritmo para
imprimir na tela a quantidade de n�meros compostos presentes neste vetor. Crie e utilize tr�s fun��es: uma
para preencher o vetor, outra para imprimir a quantidade de n�meros compostos e a terceira para retornar 1,
se um n�mero for composto, ou retornar 0, caso contr�rio.
Obs.: Um n�mero natural � Composto quando ele tem mais do que dois divisores naturais distintos.
Exemplo: O n�mero 6 � composto, pois tem como divisores os n�meros 1, 2, 3 e 6. */
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
	printf("Quantidade de n�meros compostos: %d\n", qtd);
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
	
