/* Faça um algoritmo para calcular e imprimir a matriz transposta de uma matriz 4×9
gerada aleatoriamente com números de 1 até 25. Crie e utilize três funções: uma para a
geração da matriz, outra para calcular a transposta e uma terceira para imprimir a matriz
transposta */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdlib.h>
#define A 4
#define B 9
void preencheMatriz (int matriz[][B]);
void calculaTransposta (int matriz [][B], int matrizT[][A]);
void imprimeTrasposta (int matrizT [][A]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	int matriz[A][B], matrizT[B][A];
	preencheMatriz(matriz);
	calculaTransposta(matriz, matrizT);
	imprimeTransposta(matrizT);
	return 0;
}

void preencheMatriz (int matriz[][B]){
	int i,j;
	srand(time(NULL));
	printf("Matriz original:\n\n");
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){
			matriz[i][j] = rand () % 25 + 1;
			printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}
		printf("\n");
}

void calculaTransposta (int matriz [][B], int matrizT[][A]){
	int i, j, ver=0;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			matrizT[j][i] = matriz[i][j];
		}
}

void imprimeTransposta (int matrizT [][A]){
	int i,j;
	printf("Matriz transposta:\n\n");
	for(i=0;i<B;i++){
		for(j=0;j<A;j++){
			printf(" %d ", matrizT[i][j]);
		}
		printf("\n");
	}
}
