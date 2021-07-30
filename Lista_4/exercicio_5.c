/*  Faça um algoritmo para imprimir o resultado da multiplicação de um número lido
pelo teclado (lido na função main) por uma matriz de inteiros 5×15 gerada
aleatoriamente com números de 0 até 29. Crie e utilize três funções: uma para a geração
da matriz, outra para calcular a multiplicação e uma terceira para imprimir a matriz com
o resultado da multiplicação. */

#include<stdio.h>
#include <locale.h>
#include<stdlib.h>
#include <time.h>
#define A 5
#define B 15
void preencheMatriz (int matriz[][B]);
void multiplicaMatriz (int matriz [][B], int numero);
void imprimeMult (int matriz [][B]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	int matriz [A][B], numero;
	preencheMatriz(matriz);
	printf("Digite um número para multiplicar a matriz: ");
	scanf("%d", &numero);
	multiplicaMatriz(matriz, numero);
	imprimeMult (matriz);

	
	return 0;
}
void preencheMatriz (int matriz[][B]){
	int i,j;
	srand(time(NULL));
	printf("Matriz: \n");
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){ 
			matriz[i][j] = rand () % 29 + 0;
			printf(" %d", matriz[i][j]);
		}
		printf("\n");
	}
}
		
void multiplicaMatriz (int matriz [][B], int numero){
	int i, j;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			matriz[i][j] = matriz[i][j] * numero;
		}
}

void imprimeMult (int matriz [][B]){
	int i,j;
	printf("Matriz multiplicada: \n");
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){
			printf(" %d ", matriz[i][j]);
		}
		printf("\n");
	}
}
